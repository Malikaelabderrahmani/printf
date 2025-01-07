/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:46:44 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 17:09:39 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_helper1(unsigned long p, int *l)
{
	char const	*ch;

	ch = "0123456789abcdef";
	if (p >= 0 && p <= 15)
	{
		write(1, &ch[p], 1);
		(*l)++;
	}
	else
	{
		ft_helper1(p / 16, l);
		ft_helper1(p % 16, l);
	}
}

void	ft_putptr(void *pt, int *l)
{
	unsigned long	p;

	p = (unsigned long)(pt);
	write(1, "0x", 2);
	(*l) = (*l) + 2;
	ft_helper1(p, l);
}
