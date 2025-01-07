#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *c = "salam";
	int i, u;
	//i = printf("%s %s comment cava, j'ai %d et je veux faire %p %x, %X\n", c, "Malika", 123456789, c, 255, 255);
	//u = ft_printf("%s %s comment cava, j'ai %d et je veux faire %p %x, %X\n", c, "Malika", 123456789, c, 255, 255);
	i = printf("%");
	u = ft_printf("%");
	printf("%d\n", i);
	printf("%d", u);
	return (0);
}
