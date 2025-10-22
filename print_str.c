/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:57:35 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/17 17:08:50 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_str(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!str)
	{
		return (count += write(1, "(null)", 6));
	}
	while (str[i])
	{
		count += print_char((int)str[i]);
		i++;
	}
	return (count);
}
