/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:06:11 by mel-abde          #+#    #+#             */
/*   Updated: 2024/12/15 16:58:47 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *ch, ...);
void	ft_putchar(int c, int *l);
void	ft_putnbr(int nb, int *l);
void	ft_puthex(unsigned int nb, int *l, char c);
void	ft_putun(unsigned int nb, int *l);
void	ft_putstr(char *ch, int *l);
void	ft_putptr(void *pt, int *l);

#endif
