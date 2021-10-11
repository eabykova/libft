/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:33:14 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/11 14:39:33 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	}
	else
	{
		i = 0;
		while (i < n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char c1[30] = "Augen auf!";
	char c2[30] = "Augen auf!";
	char p2[30] = "";
	char c3[30] = "Augen auf!";
	char c4[30] = "Augen auf!";
	char p4[30] = "";

	int i = 0;
	memmove(c1, c1 + 2, 3);
	printf("STANDARD MEMMOVE 1: ");
	while (c1[i])
	{
		printf("%c", c1[i]);
		i++;
	}
	printf("\n");

	i = 0;
	memmove(p2, c2, 3);
	printf("STANDARD MEMMOVE 2: ");
	while (p2[i])
	{
		printf("%c", p2[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_memmove(c3, c3 + 2, 3);
	printf("KRAFT MEMMOVE 1: ");
	while (c3[i])
	{
		printf("%c", c3[i]);
		i++;
	}
	printf("\n");

	i = 0;
	ft_memmove(p4, c4, 3);
	printf("KRAFT MEMMOVE 2: ");
	while (p4[i])
	{
		printf("%c", p4[i]);
		i++;
	}
	printf("\n");
}
*/