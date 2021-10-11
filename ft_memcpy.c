/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:16:31 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/09 23:05:07 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*buf;

	if (!dest && !src)
		return (NULL);
	buf = dest;
	while (n > 0)
	{
		*(char *)buf = *(char *)src;
		buf++;
		src++;
		n--;
	}
	return (buf);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[30] = "Der neue Gott.";
	char p[30] = "";
	char ck[30] = "Der neue Gott.";
	char pk[30] = "";

	int i = 0;
	memcpy(p, c, 7);
	printf("STANDARD MEMCPY: ");
	while (p[i])
	{
		printf("%c", p[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_memcpy(pk, ck, 7);
	printf("KRAFT MEMCPY: ");
	while (pk[i])
	{
		printf("%c", pk[i]);
		i++;
	}
	printf("\n");
}*/