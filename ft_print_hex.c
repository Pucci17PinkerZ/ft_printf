/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:57:30 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/17 17:29:40 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_print_hex(n / 16, c);
		count += ft_print_hex(n % 16, c);
	}
	if (n < 16 && c == 'x')
		count += print_char(HEX_LOW[n]);
	else if (n < 16 && c == 'X')
		count += print_char(HEX_UPP[n]);
	return (count);
}
