/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:12:39 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/17 13:41:41 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static	int	ft_countwords(const char *str, char c);
static	char	**ft_free(char **str, int i);

static	char	**ft_free(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static	int	ft_countwords(const char *str, char c)
{
	int	i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(const char *str, char c)
{
	char	**array;
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	array = (char **)malloc(sizeof(char *) * ft_countwords(str, c) + 1);
	if (array == '\0')
		return (NULL);
	end = ft_strchr(str + start, c) - str;
	array = ft_substr(str, start, 

int	main()
{
	printf("%d",ft_countwords("hola que",' '));
}
