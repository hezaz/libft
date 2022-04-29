/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:00:10 by hedi              #+#    #+#             */
/*   Updated: 2022/04/29 16:52:04 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *tmp;

    i = 0;
    tmp = lst;
    if (!lst)
        return (i);
    if (!(lst -> next))
        return (++i);
    while (tmp)
    {
        tmp = tmp -> next;
        i++;
    }
    return i;
}