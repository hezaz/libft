/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:36:35 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/04 00:58:52 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = -1;
	tmp = NULL;
	while (s && s[++i])
		if (s[i] == (const char)c)
			tmp = (char *)(&s[i]);
	if (s[i] == (const char)c)
		tmp = (char *)(&s[i]);
	return (tmp);
}
