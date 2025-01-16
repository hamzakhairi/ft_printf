/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:56:49 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/30 22:57:26 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	return_c(unsigned long num)
{
	if (num < 10)
		return ('0' + num);
	return ('a' + (num - 10));
}

static int	ft_putnbr_hex(unsigned long num, char format)
{
	int		len;
	char	c;

	len = 0;
	if (num >= 16)
	{
		len += ft_putnbr_hex(num / 16, format);
		len += ft_putnbr_hex(num % 16, format);
	}
	else
	{
		c = return_c(num);
		if (ft_handle_char(c) == -1)
			return (-1);
		len++;
	}
	return (len);
}

int	ft_handle_pointer(unsigned long str)
{
	unsigned long	addr;
	int				count;
	int				result;

	addr = (unsigned long)str;
	count = 0;
	if (!str)
		return (ft_handle_str("0x0"));
	result = ft_handle_str("0x");
	if (result == -1)
		return (-1);
	count += result;
	result = ft_putnbr_hex(addr, 'x');
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}
