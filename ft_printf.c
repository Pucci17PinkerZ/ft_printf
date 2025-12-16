/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:36:45 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/17 14:37:20 by nfiora-d         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		final_size;
	va_list	ap;
	int		i;

	i = 0;
	if (!s)
		return (-1);
	va_start(ap, s);
	final_size = 0;
	while (s[i])
	{
		if (s[i] == '%' && ft_send(s[i + 1]))
		{
			// if (print_format(s[i + 1], ap) == -1)
			// 	return (-1);
			final_size += print_format(s[i + 1], ap);
			i += 2;
		}
		else
		{
			final_size += write(1, &s[i], 1);
			i++;
		}
	}
	return (va_end(ap), final_size);
}
