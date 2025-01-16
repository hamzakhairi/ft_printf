/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:18:13 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/30 22:26:31 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_integer(int integer)
{
	int	count;
	int	result;

	count = 0;
	if (integer == -2147483648)
		return (write(1, "-2147483648", 11));
	if (integer < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		integer = -integer;
		count++;
	}
	if (integer > 9)
	{
		result = ft_handle_integer(integer / 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	if (ft_handle_char(integer % 10 + '0') == -1)
		return (-1);
	return (count + 1);
}
