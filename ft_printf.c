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
	int final_size;
	va_list	ap;
	va_start(ap, s);

	final_size = 0;
	while (!*s)
	{
		if (*s == '%')
		{
			final_size += print_format(*++s, ap);
		}
		else
			final_size = write(1, s, 1);
		s++;
	}
	return (final_size);
	va_end(ap);
}
int main (void)
{
	ft_printf("hello %s\n", "world");
}
