/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:43:56 by hedizaz           #+#    #+#             */
/*   Updated: 2022/08/26 03:42:02 by hzaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(long long n, int fd)
{
	unsigned long long	nb;
	size_t				a;
	size_t				*i;

	a = 0;
	i = &a;
	if (n < 0)
	{
		*i += ft_putchar_fd('-', fd);
		n = (n * -1);
	}
	nb = (unsigned long long)n;
	if (nb < 10)
		*i += ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		*i += ft_putnbr_fd(nb / 10, fd);
		*i += ft_putnbr_fd(nb % 10, fd);
	}
	return (*i);
}

size_t	ft_unsigned_putnbr(unsigned long long nb)
{
	size_t	i;

	i = 0;
	if (nb < 10)
		i += ft_putchar(nb + 48);
	if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return (i);
}
