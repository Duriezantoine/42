/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isasii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:23:36 by aduriez           #+#    #+#             */
/*   Updated: 2023/10/30 14:42:33 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

int	ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
		return (1);
	else
		return (0);
}