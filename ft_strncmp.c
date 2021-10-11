/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:12:45 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/08 15:55:16 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[30] = "erawrfafa   fa awera ";
	char	str2[30] = "erawrfafa   fa awera ";

	printf("STANDARD STRNCMP: %d\n", strncmp(str1, str2, 10));
	printf("KRAFT STRNCMP: %d\n", ft_strncmp(str1, str2, 10));
}
*/