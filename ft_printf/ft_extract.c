/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:57:03 by hkhairi           #+#    #+#             */
/*   Updated: 2024/12/01 00:10:52 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_extract(va_list args, char str)
{
	if (str == 'c')
		return (ft_handle_char((char)va_arg(args, int)));
	else if (str == 's')
		return (ft_handle_str(va_arg(args, char *)));
	else if (str == 'd')
		return (ft_handle_decimal(va_arg(args, int)));
	else if (str == 'p')
		return (ft_handle_pointer(va_arg(args, unsigned long)));
	else if (str == 'i')
		return (ft_handle_integer(va_arg(args, int)));
	else if (str == 'u')
		return (ft_handle_unsigned_decimal(va_arg(args, unsigned int)));
	else if (str == 'x' || str == 'X')
		return (ft_handle_number_hexadecimal(va_arg(args, unsigned int), str));
	else
		return (ft_handle_char(str));
}
