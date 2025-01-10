#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_nbr(int nbr)
{
	long    nbl;
	int	i;

	i = 0;
	nbl = nbr;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl * 1;
		i++;
	}
	if (nbl > 9)
	{
		ft_nbr(nbl / 10);
		ft_nbr(nbl % 10);
	}
	else
	{
		ft_putchar((nbl + 48));
		i++;
	}
	return(i);
}

int	ft_decimal(unsigned int number)
{
	int	i;

	i = 0;
	if (number > 9)
		ft_decimal(number / 10);
	else
	{
		ft_putchar('0' + (number % 10));
		i++;
	}
	return (i);
}
