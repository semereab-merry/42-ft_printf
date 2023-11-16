#include "ft_printf.h"

int	ft_putchar(unsigned int c)
{
	int	i;

	i = write(1, &c, 1);
	return (i);
}
