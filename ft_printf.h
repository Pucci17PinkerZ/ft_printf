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
#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int	ft_printf(const char *s, ...);
int	print_char(int c);
int	ft_print_hex(unsigned int n, char c);
int	print_format(char specifier, va_list ap);
int	print_str(char *str);
int	ft_send(char ap);
int	print_udigit(unsigned int n);
int	print_ptr(void *content);
int	print_digit(int n);

#endif