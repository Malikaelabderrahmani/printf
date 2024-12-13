#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("%d", ft_printf("salam %c\n", 'Y'));
	printf("%d", printf("salam %c", 'Y'));
	return (0);
}
