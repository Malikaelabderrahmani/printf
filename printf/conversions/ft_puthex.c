#include <unistd.h>
#include "ft_printf.h"

void	ft_puthex(unsigned int nb, int *l, char c)
{
	char const	*ch;
	
	if (c == 'l')
		ch = "0123456789abcdef";
	else if (c == 'u')
		ch = "0123456789ABCDEF";
	if (nb >= 0 && nb <= 15)
	{
		write(1, &ch[nb], 1);
		(*l)++;
	}
	else
	{
		ft_puthex(nb / 16, l, c);
		ft_puthex(nb % 16, l, c);
	}
}
