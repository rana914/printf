#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_char(va_arg(args, int));
	else if (format == 's')
		length += ft_string(va_arg(args, char*));
	else if (format == 'p')
		length += ft_pointer(va_arg(args, uintptr_t));
	else if (format == 'd' || format == 'i')
		length += ft_nbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_decimal(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += ft_percent();
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	value;
	int	i;

	i = 0;
	value = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			value += ft_format(args, format[i+1]);
			i++;
		}
		else
			value += ft_char(format[i]);
		i++;
	}
	va_end(args);
	return (value);
}
