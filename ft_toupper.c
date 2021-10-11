/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:44:29 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/09 22:07:59 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return ((int)c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c[30] = "Achtung! Toten kopf!";
	char d[30] = "Achtung! Toten kopf!";
	int i = 0;
	printf("STANDARD TOUPPER:\n");
	while (c[i])
	{
		printf("%c", toupper(c[i]));
		i++;
	}
	i = 0;
	printf("\n");
	printf("KRAFT TOUPPER:\n");
	while (d[i])
	{
		printf("%c", ft_toupper(d[i]));
		i++;
	}
	printf("\n");
}*/