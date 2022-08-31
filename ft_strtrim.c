/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 05:09:17 by hedizaz           #+#    #+#             */
/*   Updated: 2022/08/26 03:39:55 by hzaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_woset(const char *str, const char *charset)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (!charset || !*charset)
		return (ft_strlen(str));
	while (str && str[i])
	{
		if (!charset || !in_charset(str[i], charset))
			len++;
		i++;
	}
	return (len);
}

int	in_charset(const char s, const char *charset)
{
	int		i;

	i = 0;
	while (s && charset && charset[i])
		if (charset[i++] == s)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len_src;
	size_t	len_dest;
	int		i;

	i = 0;
	len_src = ft_strlen(s1);
	len_dest = 0;
	len_src--;
	if (!set || !*set)
		return (ft_strdup(s1));
	dest = malloc(len_src + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1 && s1[i] && in_charset(s1[i], set))
		i++;
	while (s1 && s1[len_src] && in_charset(s1[i], set))
		len_src--;
	while (s1[i] && i < (int)len_src)
		dest[len_dest++] = s1[i++];
	dest[len_dest] = '\0';
	return (dest);
}
