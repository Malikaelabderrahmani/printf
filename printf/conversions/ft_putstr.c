#include <unistd.h>
#include "ft_printf.h"

void	ft_putstr(char *ch, int *l)
{
	int	i;

	i = 0;
	while (ch[i])
	{
		write(1, &ch[i], 1);
		i++;
		(*l)++;
	}
}
