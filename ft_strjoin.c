/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:12:29 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 16:27:01 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*buf;
	int		l;

	if (s1 && s2)
	{
		l = ft_strlen(s1) + ft_strlen(s2);
		res = malloc(sizeof(char) * l + 1);
		buf = res;
		if (buf)
		{
			while (*s1)
				*buf++ = *s1++;
			while (*s2)
				*buf++ = *s2++;
			*buf = '\0';
			return (res);
		}
	}
	return (NULL);
}
