/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:36:35 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/13 12:40:20 by hedizaz          ###   ########.fr       */
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
	if (s[i] ==(const char)c)
		tmp = (char *)(&s[i]);
	return (tmp);
}