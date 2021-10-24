/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:45:24 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 17:36:19 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t arr, size_t size)
{
	void	*dst;

	dst = malloc(arr * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, (arr * size));
	return (dst);
}
