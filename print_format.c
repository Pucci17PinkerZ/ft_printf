/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:47:48 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/20 09:29:01 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_digit(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit((long)av_arg(ap, int), 10);
	else if (specifier == 'u')
		count += print_
	else if (specifier == 'x')
		count += print_digit((long)av_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += print_
	else if (specifier == 'i')
		count += print_
	else if (specifier == 'p')
		count += print_
	else if (specifier == '%')
		count += print_
}
pi%