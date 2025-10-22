/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:36:45 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/17 14:37:20 by nfiora-d         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_send(char c)
{
	int		i;
	char	*specifier;

	i = 0;
	specifier = "cspdiuxX%";
	while (specifier[i])
	{
		if (specifier[i] == c)
			return (1);
		i++;
	}
	return (0);
}
