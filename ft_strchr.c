/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:16:48 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/08 14:53:44 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s);
		else
			i++;
	}
	return (NULL);
}
/* функции выдают разные значения. Почему?
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[10] = "123456";
	//char d[10] = "123456";
	printf("KRAFT STRCHR: %p\n", ft_strchr(c, '4'));
	printf("STANDARD STRCHR: %p\n", strchr(c, '4'));
}
*/