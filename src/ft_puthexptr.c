/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:24:03 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/10 14:01:15 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_rechex(int len, unsigned long long ptr)
{
	char	mod;

	if (ptr < 1)
		return (len);
	if (ptr % 16 < 10)
		mod = ptr % 16 + 48;
	if (ptr % 16 >= 10)
		mod = ptr % 16 + 87;
	len = ft_rechex(len + 1, ptr / 16);
	write(1, &mod, 1);
	return (len);
}

int	ft_puthexptr(unsigned long long ptr)
{
	int	len;

	if (!ptr)
		return (0);
	len = 2;
	write(1, "0x", 2);
	len = ft_rechex(len, ptr);
	return (len);
}

/* int	main(void)
{
	char	str[] = "hello world";

	printf("%p\n", str);
	ft_puthexptr((unsigned long long) &str);
	return (0);
} */
