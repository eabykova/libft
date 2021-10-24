/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:15:12 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 16:39:16 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int i)
{
	int	res;

	res = 0;
	if (i < 0)
		res++;
	while (i / 10)
	{
		i /= 10;
		res++;
	}
	return (++res);
}

char	*ft_itoa(int n)
{
	char			*num;
	int				i;
	unsigned int	j;

	i = ft_numlen(n);
	num = malloc(sizeof(char) * i + 1);
	if (num)
	{
		num[i--] = '\0';
		j = n;
		if (n == 0)
			num[0] = '0';
		if (n < 0)
		{
			num[0] = '-';
			j = -n;
		}
		while (j > 0)
		{
			num[i] = j % 10 + '0';
			j /= 10;
			i--;
		}
	}
	return (num);
}
