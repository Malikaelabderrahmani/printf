/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:46:39 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 16:33:09 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recur(int nb, int *l)
{
	char	c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + 48;
		if (write(1, &c, 1) == -1)
		{
			(*l) = -1;
			return ;
		}
		(*l)++;
	}
	else
	{
		ft_recur(nb / 10, l);
		if ((*l) == -1)
			return ;
		ft_recur(nb % 10, l);
		if ((*l) == -1)
			return ;
	}
}

static void	ft_helper1(int nb, int *l)
{
	if (write(1, "-2147483648", 11) == -1)
	{
		(*l) = -1;
		return ;
	}
	(*l) = (*l) + 11;
}

void	ft_putnbr(int nb, int *l)
{
	if (nb == -2147483648)
		ft_helper1(nb, l);
	else if (nb < 0)
	{
		if (write(1, "-", 1) == -1)
		{
			(*l) = -1;
			return ;
		}
		(*l)++;
		nb = nb * (-1);
		ft_recur(nb, l);
		if ((*l) == -1)
			return ;
	}
	else
	{
		ft_recur(nb, l);
		if ((*l) == -1)
			return ;
	}
}
