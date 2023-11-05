/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:53:42 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/04 16:29:33 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start,size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int count;
	int safe;

	safe = (int) start;
	char *str ;
	str = malloc(len +1);
	if(str == NULL)
		return (NULL);
	count = 0;
	while(count < len)
	{
		str[count] = (char) s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}



