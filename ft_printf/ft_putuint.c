#include "ft_printf.h"

void	ft_putuint(unsigned int num, int *counter)
{
	if (num > 9)
	{
		ft_putuint(num / 10, counter);
		ft_putuint(num % 10, counter);
	}
	else
		(*counter) += ft_putchar(num + 48);
}
