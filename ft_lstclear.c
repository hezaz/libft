/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:00:10 by hedi              #+#    #+#             */
/*   Updated: 2022/04/29 18:42:17 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;
    t_list  *tmp2;

    if (!lst || !del)
        return ;
    tmp = *lst;
    while (tmp)
    {
        del(tmp -> content);
        tmp2 = tmp;
        tmp = tmp -> next;
        free(tmp2);
    }
    free(tmp);
    *lst = 0;
    return ;
}