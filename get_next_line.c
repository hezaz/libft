/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:51:52 by hzaz              #+#    #+#             */
/*   Updated: 2022/08/31 15:52:01 by hzaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	char		*gnl;
	static char	buf[1024][BUFFER_SIZE];
	char		*tmp;
	char		*add;

	add = buf[fd];
	gnl = NULL;
	tmp = NULL;
	if (fd < 0 || fd > 1023 || BUFFER_SIZE < 1)
		return (NULL);
	if (buf[fd][0])
		gnl = find_line(&tmp, &add);
	if (gnl)
		return (gnl);
	free(gnl);
	while (read(fd, add, BUFFER_SIZE) > 0)
	{
		gnl = find_line(&tmp, &add);
		if (gnl)
			return (gnl);
	}
	if (!gnl)
		return (tmp);
	free(tmp);
	return (NULL);
}
