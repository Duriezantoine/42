/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:59:18 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 19:18:38 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h" 

char	*ft_strccpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count < size)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
