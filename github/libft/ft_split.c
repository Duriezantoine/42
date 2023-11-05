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
	char *mots;
//Condition pour chaine vide

	start = 0;
	fin = 0;
	count = 0;
	nbr_mots = nbr_occurence(s, c);
	safe = (char **)malloc(sizeof(char *) * nbr_mots);
	while(count < nbr_mots)
	{
		
		fin = (occurence_start(s, c, fin));
		if(s[start] == c)
		{
			safe[count] =(char*) malloc(sizeof (char*) * fin-start+1);
			mots = malloc(sizeof (char) * fin - start +1);
			mots = ft_substr(s,(unsigned int)start+1,(size_t) (fin-start-1));
			safe[count] = mots;
			start = fin;
		}
		else
		{
			safe[count] = (char*)malloc(sizeof (char*) * fin-start+1);
			mots = malloc(sizeof (char) * fin - start +1);
			mots = ft_substr(s,(unsigned int)start,(size_t) (fin-start));
			safe[count] = mots;
			start = fin;
		}
		count++;
	}
	return(safe);	
}
int main ()
{
	char *bob="bBbBJE suis B b B ";
	char **safe;
	int fin ;
	safe = ft_split(bob, 98);
	int count = 0;
	int counter = 0;
	fin = 0;
	printf("%d", nbr_occurence(bob, 98));
	printf("\n Je suis la pre;iere %c \n", safe[0][0]); 
	while(count <2);
	{
		fin = (occurence_start(bob, 98, fin));
		counter = 0;
		while(counter < ft_strlen(safe[count]))
			printf("_%c_", safe[count][counter++]);
		count++;
	}
}
