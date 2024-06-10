/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:16:21 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/10 13:52:31 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_recitoa(int len, int nb)
{
	char	buff;

	if (nb < 1 && nb > -1)
		return (len);
	if (nb > 0)
		buff = nb % 10 + 48;
	else
		buff = -(nb % 10) + 48;
	len = ft_recitoa(len + 1, nb / 10);
	write(1, &buff, 1);
	return (len);
}

int	ft_putdigit(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		len++;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = ft_recitoa(len, nb);
	return (len);
}

/* int	main(void)
{
	int	len;

	printf("%d\n", -123);
	len = ft_putdigit(-123);
	printf("\nlen = %d\n", len);
	return (0);
} */
