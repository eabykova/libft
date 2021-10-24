/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:19:12 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 20:02:16 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buf1;
	const unsigned char	*buf2;
	size_t				i;

	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)buf1[i] != (unsigned char)buf2[i])
			return ((unsigned char)buf1[i] - (unsigned char)buf2[i]);
		i++;
	}
	return (0);
}
