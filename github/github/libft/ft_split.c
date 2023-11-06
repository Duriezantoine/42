/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:30:12 by aduriez           #+#    #+#             */
/*   Updated: 2023/11/05 14:48:26 by aduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_safe(char *safe, char const *s, char c, unsigned int start, int fin)
{
	int count;
	
	count = 0;
	while((int)start <= fin)
	{
		if(s[start] != c)
		{
			safe[count] = s[start];
			count++;
		}
		start++;
	}
	if(c != '\0')
		safe[count] = '\0';
	return(safe);

}

int	count_diff(char const *s, char c , int start, int fin)
{
	int nbr;
	nbr = 0;
	while(start<fin)
	{
		if(s[start] != c)
			nbr++;
		start++;	
	}
	return(nbr);
}
int occurence_start(char const *s, char c, int start)
{
	int search;

 	search = 0;
	if(start != 0)
		start++;
	while(s[start] != '\0')
	{
		if (start != 0 && s[start+1] != '\0' && (char)s[start] == c && (char)s[start-1] != c)
			return (start);
		start++;
	}
	if(s[start] == '\0')
		return(start);
	return(0);
}

int nbr_occurence(char const *s, char c)
{
	int i;
	int nbr_word;

	i  = 0;
	nbr_word = 0;
	while(s[i] != '\0')
	{
		if (i != 0 && s[i+1] != '\0' && (char)s[i] == c && (char)s[i-1] != c)
			nbr_word++;
		i++;
	}
	return(nbr_word+1);
}
char **ft_split(char const *s, char c)
{
	char **safe;
	int nbr_mots;
	int count;
	int start;
	int fin;
	int nbr_sur;

	start = 0;
	fin = 0;
	count = 0;
	nbr_mots = nbr_occurence(s, c);
	safe = (char**)malloc(sizeof(char*) * nbr_mots);
	while(count <= (nbr_mots -1))
	{
		fin = occurence_start(s, c ,start);
		nbr_sur=count_diff(s, c, start,fin);
		safe[count] = malloc(sizeof(char) * nbr_sur+1);
		safe[count] = ft_safe(safe[count], s ,c ,start, fin);
		start = fin;
		count++;
		
	}
	return(safe);	
}

