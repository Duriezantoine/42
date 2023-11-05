/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:43:37 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 18:20:22 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

int	ft_isalpha(int c)
{
	int	count;

	count = 0;
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}