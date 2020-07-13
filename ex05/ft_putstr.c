/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:16:10 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/13 13:24:28 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void putchar( char c);
{
	write (1,&c,1);
}
void ft_putstr( char *str)
{
	int count;
	char *ptr;
	count = 0;

	while ( count < strlen(str))
	{
		ptr = (str + count);
		count++;
	}
}

