/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:19:07 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/25 21:21:46 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbr_word(const char *s, char c)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = 0;
	if (!s || !*s)
		return (0);
	if (!c || c == 0 || c == '\0')
		return (++tmp);
	while (s && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i] && tmp == 0)
			return (0);
		if (s[i] != c && s[i])
		{
			tmp++;
			while (s[i] != c && s[i])
				i++;
		}		
	}
	return (tmp);
}

char	**fill_split(char **split, const char *s, char c, size_t nbr_mot)
{
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	x = 0;
	y = 0;
	while (s && s[i] && x < nbr_mot)
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			y = 0;
			while (s[i] != c && s[i])
				split[x][y++] = s[i++];
			split[x++][y] = '\0';
			y = 0;
		}
	}
	split[x] = NULL;
	return (split);
}

char	**ft_ultimate_malloc(size_t nbr_mot, size_t *len_str)
{
	char	**split;
	size_t	i;

	i = -1;
	split = malloc(sizeof(char *) * (nbr_mot + 1));
	if (!split)
		return (ft_ulti_malerror(split));
	while (++i < nbr_mot)
	{
		if (nbr_mot == 1)
			split[0] = malloc(sizeof(char) * (1));
		else
			split[i] = malloc(sizeof(char) * (len_str[i] + 1));
		if (!split[i])
			return (ft_ultimate_malerror(split, split[i]));
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t			*len_str;
	size_t			nbr_mot;
	char			**split;

	split = NULL;
	nbr_mot = nbr_word(s, c);
	len_str = ft_set_ultimate_len((char *)s, c , nbr_mot);
	split = ft_ultimate_malloc(nbr_mot, len_str);
	if (!split)
		return (NULL);
	ft_int_free(((int **)(&len_str)));
	if (!s)
	{
		return (ft_ulti_malerror(split));
	}
	return (fill_split(split, s, c, nbr_mot));
}
/*
int     main(int ac, char const **av)
{
    int     i = -1;
    char    **tab;
	//printf("\ntest_main_debut\n");
    if (ac ==  3)
    {
        tab = ft_split(0, 0);
		if (!tab)
			return 0;
        while (tab[++i])
        {
            //printf("%s\n", tab[i]);
        }
		//printf("\ntest_main_fin\n");
    }
}
*/