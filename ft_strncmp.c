/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollon <acollon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:54:17 by acollon           #+#    #+#             */
/*   Updated: 2025/04/12 16:06:27 by acollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	while (i < n && ((s1[i] && (s2[i] == '\0')) || (s2[i] && (s1[i] == '\0'))))
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>

int     main()
{
        char    s1[] = "Hello World";
        char    s2[] = "Hello World";

        printf("%d\n", ft_strncmp(s1, s2, 13));
        return (0);
}*/
