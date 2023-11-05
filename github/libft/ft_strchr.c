/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:43 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 19:16:29 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	int		count_search;
	char	*str;

	count = 0;
	count_search = 0;
	str = (char *) s;
	while (str[count] != '\0')
		count++;
	while (count_search <= count)
	{
		if (str[count_search] == c)
			return (&str[count_search]);
		count_search++;
	}
	return (0);
}
