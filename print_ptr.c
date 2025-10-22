/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:48:02 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/17 16:59:49 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_hexa(unsigned long long int adresse, char tmp)
{
	int	count;

	count = 0;
	if (adresse >= 16)
	{
		count += print_hexa(adresse / 16, tmp);
		count += print_hexa(adresse % 16, tmp);
	}
	if (adresse < 16 && tmp == 'x')
		count += print_char(HEX_LOW[adresse]);
	return (count);
}

int	print_ptr(void *content)
{
	int						count;
	unsigned long long int	adresse;

	count = 0;
	if (!content)
		return (write(1, "(nil)", 5));
	adresse = (unsigned long long int)content;
	count += print_str("0x");
	count += print_hexa(adresse, 'x');
	return (count);
}
