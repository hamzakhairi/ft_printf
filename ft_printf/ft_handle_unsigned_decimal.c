/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_unsigned_decimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:02:33 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/30 22:30:56 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_unsigned_decimal(unsigned int number)
{
	int	count;
	int	result;

	count = 0;
	if (number > 9)
		count += ft_handle_unsigned_decimal(number / 10);
	result = ft_handle_char((number % 10) + '0');
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}
