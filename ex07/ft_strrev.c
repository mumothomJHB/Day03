/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:48:34 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/13 14:12:44 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio,h>

char *ft_strrev(char *str);
{
	int length 
	int j;
	int i;
	char temp;

	length = 0;
	while ( str [ length] )
		length++;
	i =0
	j = length - 1;
	while ( i < j )
		{
			temp = str[i];
			str[i] = str [j];
			str[j] = temp;
			i++;
			j--;
		}
	    return (str);
}




