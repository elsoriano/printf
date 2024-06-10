/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:29:50 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/10 15:05:34 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"
// #include <unistd.h>

int	ft_bswitch(int len, char *base, int nb)
{
	int	buff;

	if (nb < 1)
		return (len);
	buff = nb % 16;
	len = ft_bswitch(len + 1, base, nb / 16);
	write(1, &base[buff], 1);
	return (len);
}

int	ft_puthexnb(char c, int nb)
{
	int		len;
	char	*base;

	if (c == 'X')
		base = ft_strdup("0123456789ABCDEF");
	else
		base = ft_strdup("0123456789abcdef");
	len = 0;
	len = ft_bswitch(len, base, nb);
	free(base);
	return (len);
}

/* int	main(void)
{
	printf("print nb hex %X\n", 12345678);
	ft_puthexnb('x', 12345678);
	return (0);
} */
