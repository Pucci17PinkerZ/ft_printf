/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <nfiora-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:48:02 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/20 09:29:01 by nfiora-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define LIBFT_H

# include <stdarg.h>
# include <stdio.h>

//foncton standard pour prinf
int	ft_printf(const char *s, ...);
int	print_format(char specifier, va_list ap);
int	print_str(char *str);
int	print_char(int c);
int	print_digit(long nbr, int base);
int	print_format(char specifier, va_list ap);
int	print_str(char *str)

# endif