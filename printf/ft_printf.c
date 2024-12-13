#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(char *ch, ...)
{
	int	i;
	va_list	l;
	int	len;

	i = 0;
	len = 0;
	va_start(l, ch);
	while (ch[i])
	{
		if (ch[i] == '%' && ch[i + 1])
		{
			if (ch[i + 1] == 'c')
			{
				ft_putchar(va_arg(l, int));
				i++;
				len--;

			}
		}
		else
			ft_putchar(ch[i]);
		len++;
		i++;
	}
	va_end(l);
	return (len);
}



