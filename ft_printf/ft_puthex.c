#include "ft_printf.h"

static int	check_zero(unsigned long num)
{
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	return (0);
}

static	int	get_count(unsigned long num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

static int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

static int	ft_putstr_hex(char *str, int len)
{
	int	i;

	i = 0;
	while (len >= 0)
	{
		i += write (1, &str[len], 1);
		len--;
	}
	free(str);
	return (i);
}

int	ft_puthex(unsigned long num, const char *format)
{
	unsigned long	temp;
	char			*base_hex;
	char			*res_char;
	int				i;

	if (*format == 'X' || *format == 'x')
		num = (unsigned int)num;
	if (check_zero(num))
		return (1);
	res_char = malloc(sizeof(char) * (get_count(num) + 1));
	res_char[get_count(num)] = '\0';
	if (!res_char)
		return (0);
	i = 0;
	base_hex = "0123456789ABCDEF";
	while (num != 0)
	{
		temp = num % 16;
		if (*format == 'X')
			res_char[i++] = base_hex[temp];
		else
			res_char[i++] = ft_tolower(base_hex[temp]);
		num = num / 16;
	}
	return (ft_putstr_hex(res_char, --i));
}
