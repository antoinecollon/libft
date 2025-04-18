/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollon <acollon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:05:43 by acollon           #+#    #+#             */
/*   Updated: 2025/04/17 14:09:51 by acollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_word(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (((str[i + 1] == c) || str[i + 1] == '\0')
			&& (ft_isalnum(str[i]) == 0))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strdup_split(const char *src, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	if (start < 0 || end < 0 || start >= end)
		return (NULL);
	str = (char *) malloc((end - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (start < end)
	{
		str[i] = src[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		tab_i;

	i = 0;
	tab_i = 0;
	tab = malloc(sizeof(char *) * ft_count_word(s, c));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		k = i;
		if (j != k)
			tab[tab_i++] = ft_strdup_split(s, j, k);
	}
	tab[tab_i] = 0;
	return (tab);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	char c = ' ';
	char **tab;
	int	i;
	
	i = 0;
	tab = ft_split(av[1], c);
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free (tab);
	return (0);
}*/
