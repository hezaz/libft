/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:19:46 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/03 17:58:36 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	char	set;

	set = (char)c;
	if ((set >= 'a' && set <= 'z') || (set >= 'A' && set <= 'Z'))
		return (1);
	return (0);
}
