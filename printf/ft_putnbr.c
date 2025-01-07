/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:46:39 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 17:16:31 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recur(int nb, int *l)
{
	char	c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
		(*l)++;
	}
	else
	{
		ft_recur(nb / 10, l);
		ft_recur(nb % 10, l);
	}
}

void	ft_putnbr(int nb, int *l)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*l) = (*l) + 11;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		(*l)++;
		nb = nb * (-1);
		ft_recur(nb, l);
	}
	else
		ft_recur(nb, l);
}
