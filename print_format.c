/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:47:48 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/17 17:19:09 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(ap, int));
	else if (specifier == 'u')
		count += print_udigit(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_print_hex(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'p')
		count += print_ptr(va_arg(ap, void *));
	else if (specifier == '%')
		count += write(1, "%%", 1);
	return (count);
}
