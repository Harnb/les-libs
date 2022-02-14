/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <rlachau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:17:40 by rlachau           #+#    #+#             */
/*   Updated: 2021/12/14 15:59:34 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_write(va_list ap, char **type)
{
	if (**type == ('%'))
		return (ft_putchar(**type));
	else if (**type == ('c'))
		return (ft_putchar(va_arg(ap, int)));
	else if (**type == ('s'))
		return (ft_putstr(va_arg(ap, char *)));
	else if (**type == ('d') || **type == ('i'))
		return (ft_putnbr_base(va_arg(ap, int), 10, 0));
	else if (**type == ('u'))
		return (ft_putunbr_base(va_arg(ap, unsigned int), 10, 0));
	else if (**type == ('x'))
		return (ft_putunbr_base(va_arg(ap, unsigned int), 16, 0));
	else if (**type == ('X'))
		return (ft_putunbr_base(va_arg(ap, unsigned int), 16, 1));
	else if (**type == ('p'))
		return (ft_put_p(va_arg(ap, unsigned long)));
	return (1);
}

static int	ft_printf_types(char *type, va_list ap)
{
	int	len;

	len = 0;
	while (*type)
	{
		if (*type == '%')
		{
			type++;
			if (ft_search_type(*type, "cspdiuxX%"))
				len += ft_printf_write(ap, &type);
			else
				return (len);
		}
		else
		{
			ft_putchar(*type);
			len++;
		}
		type++;
	}
	return (len);
}

int	ft_printf(const char *type, ...)
{
	va_list		ap;
	int			len;

	len = 0;
	if (!type)
		return (-1);
	va_start(ap, type);
	len = ft_printf_types((char *)type, ap);
	va_end(ap);
	return (len);
}
