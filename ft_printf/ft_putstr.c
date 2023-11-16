#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		i += write (1, "(null)", 6);
		return (i);
	}
	while (*str != '\0')
	{
		i += ft_putchar(*str);
		str++;
	}
	return (i);
}
