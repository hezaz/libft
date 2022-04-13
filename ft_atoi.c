/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:07:48 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/13 15:13:41 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	int			res2;
	long long	tmp;

	res2 = 0;
	s = 1;
	i = 0;
	tmp = 0;
	while (str && str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	if ((str[i] == '+' || str[i] == '-') && str && str[i])
		if (str[i++] == '-')
			s *= (-1);
	while (str && str[i] && (str[i] >= '0' && str[i] <= '9'))
		tmp = (tmp * 10) + (str[i++] - '0');
	tmp *= s;
	if ((tmp > INT_MAX) || (tmp < INT_MIN))
		return (res2);
	res2 = (int)tmp;
	return (res2);
}