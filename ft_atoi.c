/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:46:53 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/07 14:03:32 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	unsigned int	val;
	int				i;
	int				sign;

	val = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += (str[i] - '0');
		i++;
	}
	return (val * sign);
}

/* ALL IS DONE!
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	bb[] = "-4674lkjh";
	char	cc[] = "-4674lkjh";
	int		x;
	int		y;
	printf("INPUT VAL: %s\n", bb);
	x = ft_atoi(bb);
	y = atoi(cc);
	printf("FT_ATOI OUTPUT: %d\n", x);
	printf("STANDARD ATOI OUTPUT: %d\n", y);
}
*/
