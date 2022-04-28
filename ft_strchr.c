/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:36:11 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/28 18:16:46 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = -1;
	while (s && s[++i])
		if (s[i] == (char)c)
		{
			ret = (char *)(&s[i]);
			return (ret);
		}
	if (s[i] == (char)c)
	{
		ret = (char *)(&s[i]);
		return (ret);
	}
	return (NULL);
}
