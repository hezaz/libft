/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:36:39 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/04 00:59:59 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s && s[i] && i < n)
		i++;
	return (i);
}

size_t	ft_str_start_nlen(const char *s, size_t start, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s && s[i] && i < start)
		i++;
	while (s && s[i] && j < n)
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;
	size_t			j;
	size_t			len2;

	len2 = ft_str_start_nlen(s, start, len);
	dest = malloc(sizeof(char) * (len2 + 1));
	if (!dest)
		return (NULL);
	i = start;
	j = 0;
	if (len2 == 0)
	{
		dest[0] = '\0';
		return (dest);
	}
	while (s && dest && s[i] && j < len2)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}
