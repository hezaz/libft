/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:16:31 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/12 14:19:14 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	int		i;
	char	*dest;

	len = ft_strlen(s1);
	i = -1;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (dest && s1 && s1[++i])
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}