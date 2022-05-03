/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:36:32 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/03 02:56:12 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_n_charset(const char *s, const char *charset, size_t len)
{
	size_t	i;

	i = 0;
	if (!s || !charset || len == 0)
		return (0);
	while (s[i] && charset[i] && s && charset && i < len)
	{
		if (s[i] != charset[i])
			return (0);
		i++;
	}
	if (charset[i] != '\0')
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char *)haystack;
	if (!needle || needle[0] == '\0')
		return (ret);
	while (haystack && needle && haystack[i] && i < len)
	{
		ret = (char *)haystack;
		if (is_n_charset((haystack + i), needle, (len - i)))
			return (ret + i);
		i++;
	}
	ret = NULL;
	return (ret);
}
/*
int	main(int ac, char **av)
{
	
	
	if (ac < 3)
	{
		printf("pas assez d'arg");
		return (0);
	}
	if (ft_strnstr(av[1], av[2], 8) == NULL && strnstr(av[1], av[2], 8) == NULL)
	{
		printf("ok");
		return (0);
	}
	else if (strnstr(av[1], av[2], 8) == NULL || ft_strnstr(av[1], av[2],
				8) == NULL )
	{
		printf("faux");
		if (strnstr(av[1], av[2], 8) == NULL)
		{
			printf("NULL_LIB");
			printf("\n versin_lib : (null)\n");
			printf("\n version_ft :  %s\n", strnstr(av[1], av[2], 8));
		}
		else if (ft_strnstr(av[1], av[2], 8) == NULL)
		{
			printf("NULL_FT");
			printf("\n version_ft  : %s\n",ft_strnstr(av[1], av[2], 8));
			printf("\n version_lib : %s\n",strnstr(av[1], av[2], 8));
		}
		return (0);
	}
	if (strcmp(ft_strnstr(av[1], av[2], 8), strnstr(av[1], av[2], 8)))
	{
		printf("\n version lib : %s\n", strnstr(av[1], av[2], 8));
		printf("\n version ft : %s\n", ft_strnstr(av[1], av[2], 8));
		printf("faux");
	}
	else
		printf("vrai");
}


*/