/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollon <acollon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:20:42 by acollon           #+#    #+#             */
/*   Updated: 2025/04/10 22:01:19 by acollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sc;
	size_t				i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (const unsigned char *)src;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	dest[50];
	char	*dst;

	if (ac == 2)
	{
		dst = ft_memcpy(dest, av[1], 15);
		printf("Source : %s\n", av[1]);
		printf("Dest : %s\n", dest);
	}
	return (0);
}*/
