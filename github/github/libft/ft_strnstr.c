/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:30:11 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 18:10:04 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	count2;

	count = 0;
	if (little[count] == '\0')
	{
		return ((char *)big);
	}
	while (count < len)
	{
		count2 = 0;
		while (big[count + count2] == little[count2])
		{
			count2++;
			if (little[count2] == '\0' && count + count2 <= len)
				return ((char *)big + count);
		}
		count++;
	}
	return (NULL);
}
