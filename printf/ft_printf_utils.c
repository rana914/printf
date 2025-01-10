#include "ft_prinf.h"

int	ft_char(int	c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_string(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_char(str[i]);
		i++;
	}
	return (i);
}

int	printhexa(uintptr_t address, char *hexaDijits)
{
	char    buffer[16];
	int     index;
	int     i;

	index = 0;
	i = 0;
	while (address > 0)
	{
		buffer[index++] = hexaDijits[address % 16];
		address /= 16;
	}
	i = index - 1;
	while(i >= 0)
	{
		i--;
		ft_char(buffer[i]);
	}
	return (index);
}

int	ft_pointer(void *ptr)
{
	char    hexaDijits[] = "0123456789abcdef";

	ft_char('0');
	ft_char('x');

	return (printhexa((uintptr_t)ptr, hexaDijits));
}

int	ft_hexa(unsigned int nbr, const char format)
{
	char    hexaDijitsl[] = "0123456789abcdef";
	char    hexaDijitsa[] = "0123456789ABCDEF";
	int	index;
    

        index = 0;
	if (format == 'x')
        	index += printhexa((uintptr_t)ptr, hexaDijitsl);
	if (format == 'X')
		index += printhexa((uintptr_t)ptr, hexaDijitsa);
	return (index);
}

int	ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}
