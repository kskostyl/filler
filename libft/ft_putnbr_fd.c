/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:26:28 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/17 23:42:05 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_fd(int n, int fd)
{
	char			k;
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = (-1) * n;
	}
	else
		num = n;
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	k = num % 10 + '0';
	write(fd, &k, 1);
}
