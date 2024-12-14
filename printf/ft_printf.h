#ifndef PRINTF_H
#define PRINT_F

#include <unistd.h>

int	ft_printf(char *ch, ...);
void	ft_putchar(int c, int *l);
void	ft_putnbr(int nb, int *l);
void	ft_puthex(int nb, int *l, char c);
void	ft_putun(unsigned int nb, int *l);
void	ft_putstr(char *ch, int *l);
void	ft_putptr(void *pt, int *l);

#endif
