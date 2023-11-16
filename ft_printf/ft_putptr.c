#include "ft_printf.h"

int	ft_putptr(unsigned long num)
{
	int		res;
	char	*format;

	format = "p";
	res = 0;
	res += write (1, "0x", 2);
	res += ft_puthex(num, format);
	return (res);
}
