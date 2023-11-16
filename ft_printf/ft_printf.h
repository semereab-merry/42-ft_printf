#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(unsigned int c);
int		ft_putstr(char *str);
int		ft_puthex(unsigned long num, const char *format);
int		ft_putptr(unsigned long num);
void	ft_putnbr(int num, int *counter);
void	ft_putuint(unsigned int num, int *counter);

#endif