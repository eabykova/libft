/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:29:21 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/08 12:37:00 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf;
	size_t			i;

	buf = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buf[i] == (unsigned char)c)
			return ((void *)(buf + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char s1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	char s2[10] = "123456789";

	//memchr(s1, 8, 3);
	//printf("STANDARD FT: %s\n", s1);
	printf("ARRAY OUTPUT: %d\n", *s2);
	ft_memchr(s2, 40, 3);
	printf("KRAFT FT: %d\n", *s2);
}
*/