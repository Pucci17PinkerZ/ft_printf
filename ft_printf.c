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
	int		check;
	va_list	ap;
	int		i;

	i = 0;
	check = 0;
	final_size = 0;
	if (!s)
		return (-1);
	va_start(ap, s);
	while (s[i])
	{
		check = ft_printf_check(&i, s, ap);
		if (check == -1)
			return (va_end(ap), -1);
		final_size += check;
	}
	va_end(ap);
	return (final_size);
}

int	ft_printf_check(int *i, const char *s, va_list ap)
{
	int	check;

	if (s[*i] == '%' && ft_send(s[*i + 1]))
	{
		check = print_format(s[*i + 1], ap);
		if (check == -1)
			return (-1);
		*i += 2;
		return (check);
	}
	else
	{
		check = write(1, &s[*i], 1);
		(*i)++;
		return (check);
	}
}
