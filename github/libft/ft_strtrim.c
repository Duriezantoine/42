/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:03:23 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/04 16:25:55 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int counts1;
	int counts2;
	int count_neg;

	count_neg = 0;	
	counts2 = 0;
	counts1 = ft_strlen(s1);
	while(set[counts2])
	{
		if (ft_strchr(s1, set[counts2]) != 0)
		{
				
		}
		counts2++;

	}
	printf("%d", count_neg);
	return(0);
		
}
