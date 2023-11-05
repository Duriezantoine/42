/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:05:26 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 17:24:26 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*boby;
	size_t			count;

	count = 0;
	boby = s;
	while (count < n)
	{
		boby[count] = 0;
		count++;
	}
	return ;
}
