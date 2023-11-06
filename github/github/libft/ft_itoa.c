/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:26:30 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/06 11:19:36 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_itoa(int n);
char ft_putnbr_increment(int n)
{
	int reste;
	char safe;
	reste = n %10;
	safe = reste +48;
	return(safe);
}
int putnbr_count(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	int count;
	char *safe;
	int neg;
	int count_safe;
	if(n == 0 || n == -0)
	{
		safe = malloc(sizeof(char) * 2);
		safe[0] = 48;
		safe[1] = '\0';
		return (safe);
	}
	if (n == -2147483648)
	{
		safe = malloc(sizeof(char) * 12);
		if(safe == NULL)
			return(NULL);
		count = ft_strlcpy( safe,"-2147483648", 12);
		//Modifier retour 
		return(safe);
	}
	neg = 0;
	if (n < 0)
	{
		neg++;
		n = n*-1;
	}
	count = putnbr_count(n);
	count_safe = count;
	if (neg == 0)
	{
		safe = malloc(sizeof(char) * count+1);
		if(safe == NULL)
			return (NULL);
		count--;
		while(count>=0)
		{
			safe[count] = ft_putnbr_increment(n);
			n = n / 10;
			count--;
		}
		safe[count_safe] = '\0';
	}
	if (neg != 0)
	{	
		safe = malloc(sizeof(char) * count+2 );
		if(safe == NULL)
			return (NULL);
		safe[0] = '-';
		while(count>0)
		{
			safe[count] = ft_putnbr_increment(n);
			n = n / 10;
			count--;
		}
		safe[count_safe+1] = '\0';
	}
	
	return (safe);
}
