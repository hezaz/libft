/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:00:10 by hedi              #+#    #+#             */
/*   Updated: 2022/05/04 01:11:25 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup_lstmap(t_list *lst, void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	ret = ft_lstnew(lst -> content);
	tmp = ret;
	lst = lst -> next;
	while (lst)
	{
		ret -> next = ft_lstnew(lst -> content);
		if (!ret -> next)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ret = ret -> next;
		lst = lst -> next;
	}
	ret = tmp;
	return (ret);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	ret = ft_lstdup_lstmap(lst, del);
	if (!ret)
		return (NULL);
	tmp = ret;
	while (tmp)
	{
		tmp -> content = f(tmp -> content);
		tmp = tmp -> next;
	}
	return (ret);
}
