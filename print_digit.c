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

int	print_digit(long nbr, int base)
{
	int count;
	
	char	*symbols;
	
	symbols = "0123456789abcdef";
	if (n < 0 && base == 10)
	{
		write(1, "-", 1);
		return (print_digit(-nbr, base) + 1);
	}
	else if(n < base)
	{
		return (print_char(symbols[nbr]) + 1);
	}
	else
	{
		count = print_digit(nbr / base, base);
		return (count + print_digit(nbr % base, base));
	}
}