/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_number_hexadecimal.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:40:22 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/30 22:26:56 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_number_hexadecimal(unsigned int number, char str)
{
	int		count;
	char	*x;
	int		result;

	count = 0;
	if (str == 'X')
		x = "0123456789ABCDEF";
	else
		x = "0123456789abcdef";
	if (number >= 16)
	{
		result = ft_handle_number_hexadecimal(number / 16, str);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_handle_char(x[number % 16]);
	if (result == -1)
		return (-1);
	return (count + result);
}
