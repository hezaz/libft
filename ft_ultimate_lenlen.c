/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_lenlen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:35:48 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/12 13:36:26 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

size_t	ft_ultimate_lenlen(char **s)
{
	size_t	len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	j = 0;
	while (s && s[i] && s[i][j])
	{
		while (s && s[i][j++])
			len++;
		i++;
		j = 0;
	}
}