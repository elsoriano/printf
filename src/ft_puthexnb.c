/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:29:50 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/12 13:37:04 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

int	ft_bswitch(int len, char *base, unsigned int nb)
{
	int	buff;

	if (nb < 1)
		return (len);
	buff = nb % 16;
	len = ft_bswitch(len + 1, base, nb / 16);
	write(1, &base[buff], 1);
	return (len);
}

int	ft_puthexnb(char c, unsigned int nb)
{
	int		len;
	char	*base;

	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (c == 'X')
		base = ft_strdup("0123456789ABCDEF");
	else
		base = ft_strdup("0123456789abcdef");
	len = 0;
	len = ft_bswitch(len, base, nb);
	free(base);
	return (len);
}
