/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:41:17 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/09 22:12:08 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
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
	printf("STANDARD TOLOWER:\n");
	while (c[i])
	{
		printf("%c", tolower(c[i]));
		i++;
	}
	i = 0;
	printf("\n");
	printf("KRAFT TOLOWER:\n");
	while (d[i])
	{
		printf("%c", ft_tolower(d[i]));
		i++;
	}
	printf("\n");
}
*/
