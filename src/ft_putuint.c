/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:49:07 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/12 13:35:12 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_uintoa(int len, unsigned int nbr)
{
	char	buff;

	if (nbr < 1)
		return (len);
	buff = nbr % 10 + 48;
	len = ft_uintoa(len + 1, nbr / 10);
	write(1, &buff, 1);
	return (len);
}

int	ft_putuint(unsigned int nbr)
{
	int				len;

	len = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = ft_uintoa(len, nbr);
	return (len);
}
