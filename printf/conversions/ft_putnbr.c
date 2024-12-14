#include <unistd.h>

void ft_recur(int nb, int *l)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
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

