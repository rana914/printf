#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
#include <stdint.h>
#include <stdarg.h>

int		ft_nbr(int nbr);
int		ft_char(int c);
int		ft_string(char	*str);
int		printhexa(uintptr_t address, char *hexaDijits);
int		ft_pointer(uintptr_t ptr);
int		ft_hexa(unsigned int nbr, const char format);
int		ft_percent(void);
int		ft_decimal(unsigned int number);
void	ft_putchar(char c);

#endif
