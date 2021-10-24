/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:17:34 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 20:02:16 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*tmp;
	int		len;
	int		i;

	len = ft_strlen(s1);
	dest = malloc(sizeof(char) * len + 1);
	tmp = dest;
	i = 0;
	if (tmp)
	{
		while (s1[i])
		{
			tmp[i] = s1[i];
			i++;
		}
		tmp[i] = '\0';
		return (dest);
	}
	return (NULL);
}
