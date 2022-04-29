/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:02:03 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/29 17:33:25 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
 {
	char	*str;
	int		i;
	str = strdup(s);
	if (!str) 
		return (NULL);
	i = -1;
	while (str && str[++i])
		str[i] = (*f)(i, str[i]);
	return (str);
}