/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:14:05 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/13 14:44:18 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi( char *str);
{
	int a;
	int b;

	b = 1;
	a = 0;

	while (*str <=' ' || ( *str == '+' && (str + 1) >= '0'))
		str++;
	while (*str)
	{
		if (*str == '-')
		{
			b = -1;
			str++;
		}
		if (*str >='0' && *str <='9')
			a = a*10 + (*str - '0' );
		else 
			break;
		str++;
	}
	return (result * sign)
}
