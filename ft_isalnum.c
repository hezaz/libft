/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:22:46 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/03 17:58:29 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	char	set;

	set = (char)c;
	if ((set >= 'a' && set <= 'z') || (set >= 'A' && set <= 'Z'))
		return (1);
	if (set >= '0' && set <= '9')
		return (1);
	return (0);
}
