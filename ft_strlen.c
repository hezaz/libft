/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:20:46 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/14 00:06:39 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s && s[i] != '\0')
        i++;
    return (i);
}

size_t	*ft_set_ultimate_len(char *s, char c, size_t nbr_mot)
{
	size_t	j;
	size_t	k;
	size_t *len;

	len = malloc(sizeof(size_t) * nbr_mot);
	if (!len)
		return (NULL);
	j = 0;
	k = 0;
	while (s && *s && k < nbr_mot)
	{
		while (*s == c && *s && s)
			s++;
		if (*s != c && *s && s)
		{
			j = 0;
			while (*s != c && *s && s)
			{
				j++;
				s++;
			}
			len[k++] = j;
		}
	}
	return (len);
}