/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:45:37 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/13 14:55:43 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_integer_table( int *tab, int size);
{
	int tmp;
	int i;
	i = 0;

	while( i < size )
	{
		if ( tab[i] < tab[i+1] )
		{
			tab[i] = tmp;
			tab [i+1] = tab[1];
			tmp = tab[i+1];
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

