/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:47:02 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 17:54:02 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_helper1(va_list l, char c, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(l, int), len);
	else if (c == 's')
		ft_putstr(va_arg(l, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(l, int), len);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(l, unsigned int), len, c);
	else if (c == 'p')
		ft_putptr(va_arg(l, void *), len);
	else if (c == 'u')
		ft_putun(va_arg(l, unsigned int), len);
	else if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *ch, ...)
{
	int		i;
	va_list	l;
	int		len;

	len = 0;
	i = 0;
	va_start(l, ch);
	while (ch[i])
	{
		if (ch[i] == '%')
		{
			ft_helper1(l, ch[i + 1], &len);
			i++;
		}
		else
			ft_putchar(ch[i], &len);
		if (ch[i])
			i++;
	}
	va_end(l);
	return (len);
}
