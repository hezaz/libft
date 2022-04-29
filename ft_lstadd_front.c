/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:00:10 by hedi              #+#    #+#             */
/*   Updated: 2022/04/29 03:30:48 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_t_list_len(t_list *list)
{
    size_t  len;
    t_list *ret;

    len = 0;
    ret = list;
    while (ret->next != NULL)
    {
        len++;
        ret = list->next;
    }
    return (len);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new->next = *lst;
    *(lst) = new;
}