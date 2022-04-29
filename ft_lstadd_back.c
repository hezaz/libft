/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:00:10 by hedi              #+#    #+#             */
/*   Updated: 2022/04/29 16:30:11 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (!lst || !new)
        return ;
    tmp = *lst;
    if (!tmp)
    {
        *lst = new;
        return ;
    }
    while (tmp -> next)
        tmp = tmp -> next;
       
    tmp -> next = new;
    return ;
}