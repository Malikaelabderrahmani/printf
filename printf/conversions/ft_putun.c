/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:46:57 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 15:58:12 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putun(unsigned int nb, int *l)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48, l);
		if ((*l) == -1)
			return ;
	}
	else
	{
		ft_putun(nb / 10, l);
		if ((*l) == -1)
			return ;
		ft_putun(nb % 10, l);
		if ((*l) == -1)
			return ;
	}
}
