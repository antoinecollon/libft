/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollon <acollon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:57:51 by acollon           #+#    #+#             */
/*   Updated: 2025/04/13 18:05:16 by acollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_trimmed_len(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		trimmed_len;
	int		j;

	j = 0;
	i = 0;
	trimmed_len = ft_trimmed_len(s1, set);
	trimmed = malloc(sizeof(char) * (trimmed_len + 1));
	if (!trimmed)
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
		{
			trimmed[j] = s1[i];
			j++;
		}
		i++;
	}
	return (trimmed);
}
/*
#include <stdio.h>

int	main()
{
	char *str = "..........Hello......World............";
	char *set = ".";

	printf("Trimmed string : %s\n", ft_strtrim(str, set));
	return (0);
}*/