/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:08:40 by mmicheli          #+#    #+#             */
/*   Updated: 2021/10/24 18:59:12 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buf;
	t_list	*reslst;

	buf = NULL;
	if (lst)
	{
		while (lst)
		{
			reslst = ft_lstnew((*f)(lst->content));
			if (!reslst)
			{
				ft_lstclear(&buf, del);
				return (NULL);
			}
			ft_lstadd_back(&buf, reslst);
			lst = lst->next;
		}
		return (buf);
	}
	return (NULL);
}
