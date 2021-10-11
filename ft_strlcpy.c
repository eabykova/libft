/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:53:34 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/11 17:26:55 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	char	*buf;

	

}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	c[30] = "Das Boot.";
	char	p[30] = "";
	//char	ck[30] = "Das Boot.";
	//char	pk[30] = "";

	strlcpy(p, c, 20);
	printf("%s\n", p);
}