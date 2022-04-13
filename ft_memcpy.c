/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:26:19 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/13 11:43:29 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*x;
	const unsigned char	*y;

	if (!dst || !src) 
		return (NULL);
	i = -1;
	x = (unsigned char *)dst;
	y = (const unsigned char *)src;
	while (++i < n)
		x[i] = y[i];
	return (dst);
}/*

int	main(int ac, char **av)
{

	if (ac == 0 || !av[0] || ! ac)
		return 0;
	 int *tab2 = malloc(sizeof(char) * 1000);
	 int *tab4 = malloc(sizeof(char) * 1000);
	 const char *tab = "bon\njour";
	 const char *tab3 = "bon\njour";
	if (strncmp(ft_memcpy(tab2, tab, 7), memcpy(tab4, tab3, 7), 10) != 0)
	{
		printf("faux");
	}
	else
		printf("ok");
	return 0;
	free(tab4);
	free(tab2);
}*/
