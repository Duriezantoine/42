/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:43:02 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/03 18:21:36 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
int ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return 1;
	else
		return 0;

}
