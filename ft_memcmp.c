/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollon <acollon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:27:32 by acollon           #+#    #+#             */
/*   Updated: 2025/04/12 15:35:57 by acollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while ((str1[i] != '\0' && str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	while (i < n && ((str1[i] && (str2[i] == '\0'))
			|| (str2[i] && (str1[i] == '\0'))))
		return (str1[i] - str2[i]);
	return (0);
}
/*
#include <stdio.h>

int     main()
{
char    s1[] = "Hello world";
char    s2[] = "Hello WorlD";

printf("%d\n", ft_memcmp(s1, s2, 10));
return (0);
}*/
