#include "ft_printf.h"

int	get_print(va_list arg, const char *format)
{
	int	counter_copy;

	counter_copy = 0;
	if (*format == '%')
		counter_copy += ft_putchar(*format);
	else if (*format == 'c')
		counter_copy += ft_putchar(va_arg(arg, unsigned int));
	else if (*format == 's')
		counter_copy += ft_putstr(va_arg(arg, char *));
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(arg, int), &counter_copy);
	else if (*format == 'u')
		ft_putuint(va_arg(arg, unsigned int), &counter_copy);
	else if (*format == 'x' || *format == 'X')
		counter_copy += ft_puthex(va_arg(arg, unsigned long), format);
	else if (*format == 'p')
		counter_copy += ft_putptr(va_arg(arg, unsigned long));
	else
		counter_copy += ft_putchar(*format);
	return (counter_copy);
}

int	ft_printf(const char *format, ...)
{
	int		counter;
	va_list	arg;

	va_start(arg, format);
	counter = 0;
	while (*format != 0)
	{
		if (*format == '%')
			counter += get_print(arg, ++format);
		else
			counter += ft_putchar(*format);
		format++;
	}
	va_end(arg);
	return (counter);
}

// #include <stdio.h>
// int main()
// {
// 	char c = 'c';
// 	char  *str = "HELLO";
// 	int i = 90;
// 	int j = -90;
// 	unsigned long k = 90;
// 	printf("%d \n", ft_printf("%c - %s - %p - (%d) - (%i) - %u - %x - %X \n",
//  c, str, (void*)k, j, j, i, i, i));
// 	printf("%d \n", printf("%c - %s - %p - (%d) - (%i) - %u - %x - %X \n",
//  c, str, (void*)k, j, j, i, i , i));
// }