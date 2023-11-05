/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:51:13 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 19:11:48 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*copy1;
	unsigned char	*copy2;

	copy1 = (unsigned char *) dest;
	copy2 = (unsigned char *) src;
	if (n && copy1 != 0)
	{
		if (src > dest)
		{
			while (n--)
			{
				*(copy1++) = *(copy2++);
			}
		}
		else
			while (n--)
				copy1[n] = copy2[n];
	}
	return ((unsigned char *)dest);
}
