#include <unistd.h>
#include "ft_printf.h"

void	ft_putun(unsigned int nb, int *l)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
		(*l)++;
	}
	else
	{
		ft_putun(nb / 10, l);
		ft_putun(nb % 10, l);
	}
}
