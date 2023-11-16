#include "ft_printf.h"

void	ft_putnbr(int num, int *counter)
{
	if (num == -2147483648)
	{
		(*counter) += ft_putstr("-2147483648");
	}
	else if (num < 0)
	{
		(*counter) += ft_putchar('-');
		num = -num;
		ft_putnbr(num, counter);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10, counter);
		ft_putnbr(num % 10, counter);
	}
	else
		(*counter) += ft_putchar(num + 48);
}
