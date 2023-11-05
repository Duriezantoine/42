/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:18:52 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 18:06:13 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	int				count;
	unsigned int	counter;

	counter = 0;
	count = 0;
	while (src[counter] != '\0' || counter < size)
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (src[counter] != '\0')
		return (counter);
	dst[count] = '\0';
	return (count);
}
