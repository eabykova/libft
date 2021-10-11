/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:17:34 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/11 16:26:39 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strdup(const char *s1)
{
	char	*dest;
	char	*tmp;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	dest = malloc(i + 1);
	if (!dest)
		return (NULL);
	temp = dest;
	while (s1[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (*dest);
}