/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:14:21 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/07 18:46:36 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buf1;
	const unsigned char	*buf2;
	size_t				i;

	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)buf1[i] != (unsigned char)buf2[i])
			return ((unsigned char)buf1[i] - (unsigned char)buf2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[10] = "1205678";
	char s2[10] = "12345678";
	int i = 4;
	printf("STANDARD FT: %d\n", memcmp(s1, s2, i));
	printf("KRAFT FT: %d\n", ft_memcmp(s1, s2, i));
}*/