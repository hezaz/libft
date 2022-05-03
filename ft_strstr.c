/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:31:36 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/04 00:59:00 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char *s, char *charset)
{
	int	i;

	i = 0;
	if (!s || !charset)
		return (0);
	while (s[i] && charset[i] && s[i] == charset[i])
		i++;
	if (charset[i] != '\0')
		return (0);
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = -1;
	if (!needle || needle[0] == '\0')
		return (haystack);
	while (haystack && needle && haystack[++i])
	{
		if (is_charset(haystack, needle))
			return (haystack + i);
	}
	return (NULL);
}
