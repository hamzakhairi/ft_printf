/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:19:07 by hkhairi           #+#    #+#             */
/*   Updated: 2024/12/01 00:17:13 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			count;

	count = 0;
	va_start(ap, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
				count += write(1, "%", 1);
			else if (*s == '\0')
				break ;
			else
				count += ft_extract(ap, *s);
		}
		else
			count += write(1, s, 1);
		s++;
	}
	va_end(ap);
	return (count);
}
