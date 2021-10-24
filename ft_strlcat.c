/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:19:12 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 20:02:16 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ds;
	size_t	ss;

	ds = 0;
	ss = 0;
	while (dst[ds] && ds < dstsize)
		ds++;
	while ((src[ss]) && ((ds + ss + 1) < dstsize))
	{
		dst[ds + ss] = src[ss];
		ss++;
	}
	if (ds != dstsize)
		dst[ds + ss] = '\0';
	return (ds + ft_strlen(src));
}
