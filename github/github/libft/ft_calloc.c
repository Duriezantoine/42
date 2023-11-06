/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:55:17 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 18:32:03 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*test;
	size_t	count;

	count = 0;
	test = malloc (nmemb * size);
	if (test == NULL)
	{
		return (NULL);
	}
	while (count < nmemb * size)
	{
		test[count] = 0;
		count++;
	}
	return (test);
}
