/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:57:30 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/20 09:29:01 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_udigit(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
	{
		return (print_char(HEX_LOW[n]));
	}
	else
	{
		count += print_digit(n / 10);
		return (count + print_digit(n % 10));
	}
}
