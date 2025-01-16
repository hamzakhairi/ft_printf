/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:15 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/30 22:08:12 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_str(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		result = ft_handle_char(str[i]);
		if (result == -1)
			return (-1);
		count += result;
		i++;
	}
	return (count);
}
