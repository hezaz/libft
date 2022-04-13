/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 05:03:03 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/13 19:01:05 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	dest = malloc(len + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1 && s1[i] && dest)
		dest[k++] = s1[i++];
	while (s2 && s2[j] && dest)
		dest[k++] = s2[j++];
	dest[k] = '\0';
	return (dest);
}
