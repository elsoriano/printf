/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:29:50 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/09 22:02:00 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_bswitch(int len, char *base, int nb)
{
	int	buff;

	if (nb < 1)
		return (len);
	buff = nb % 16;
	ft_bswitch(len, base, nb / 16);
	write(1, &base[buff], 1);
	len++;
}

int	ft_puthexnb(char c, int nb)
{
	int		len;
	char	*base;

	if (c == 'x')
		base = ft_strdup("0123456789ABCDEF");
	else
		base = ft_strdup("0123456789abcdef");
	len = 0;
	len = ft_bswitch(len, base, nb);
	free(base);
	return (len);
}

int	main(void)
{
	printf("print nb hex %x", 12345);
	ft_puthexnb("X", 12345);
	return (0);
}
