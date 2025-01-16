/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftPrintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:07:38 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/26 17:33:05 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_extract(va_list args, const char str);
int		ft_handle_char(char c);
int		ft_handle_str(char *str);
int		ft_handle_decimal(int integer);
int		ft_handle_pointer(unsigned long str);
int		ft_handle_integer(int integer);
int		ft_handle_unsigned_decimal(unsigned int number);
int		ft_handle_number_hexadecimal(unsigned int number, char str);

#endif
