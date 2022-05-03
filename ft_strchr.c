/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:36:11 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/04 00:55:13 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s && s[++i])
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
	if (s[i] == (char)c)
		return ((char *)(&s[i]));
	return (NULL);
}
