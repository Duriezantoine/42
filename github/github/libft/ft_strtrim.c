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
char *ft_strtrim(char const *s1, char const *set);

int end_search (char const *s1, char const *set, unsigned int len)
{
	int count_s1;
	int count_set;
	int count_dif;
	
	count_s1 = 0;
	printf("%dla", len);
	while(len >= 0)
	{
	
		count_set = 0;
		count_dif = 0;
		printf("e");
		while(set[count_set]!= '\0')
		{
			printf("lq");
			if(s1[len] == set[count_set])
				count_dif++;
			count_set++;
		}
		if(count_dif != 0)
			return(len-1);
		len--;
	}
}

int start_search(char const *s1, char const *set)
{
	int count_s1;
	int count_set;
	int count_dif;
	
	count_s1 = 0;
	while(s1[count_s1] != '\0')
	{
		count_set = 0;
		count_dif = 0;
		while(set[count_set]!= '\0')
		{
			if(s1[count_s1] == set[count_set])
				count_dif++;
			count_set++;
		}
		if(count_dif == 0)
			return(count_s1-1);
		count_s1++;
	}
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *safe;
	int count_s1;
	int start;
	int end;
	
	start = start_search(s1, set);
	count_s1 = ft_strlen(s1);
	end = end_search(s1, set, count_s1);
	printf("%d %d", end, count_s1);
}
