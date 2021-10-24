/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:35:00 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 14:47:01 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		fn;

	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		fn = ft_strlen(s1);
		while (fn > 0 && ft_strchr(set, s1[fn]))
			fn--;
		res = ft_substr((char *)s1, 0, fn + 1);
		return (res);
	}
	return (NULL);
}
