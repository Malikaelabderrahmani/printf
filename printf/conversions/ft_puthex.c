/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:46:36 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 16:13:21 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, int *l, char c)
{
	char const	*ch;

	if (c == 'x')
		ch = "0123456789abcdef";
	else if (c == 'X')
		ch = "0123456789ABCDEF";
	if (nb >= 0 && nb <= 15)
	{
		if (write(1, &ch[nb], 1) == -1)
		{
			(*l) = -1;
			return ;
		}
		else
			(*l)++;
	}
	else
	{
		ft_puthex(nb / 16, l, c);
		if ((*l) == -1)
			return ;
		ft_puthex(nb % 16, l, c);
		if ((*l) == -1)
			return ;
	}
}
