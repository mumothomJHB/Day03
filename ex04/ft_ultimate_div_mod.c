/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:55:01 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/13 12:09:42 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod( int *a, int *b)
{
	int a;
	int b;

    	a = (*a)/(*b);
		b = (*a) % (*b);
		*a = b
	    *b = a
}

