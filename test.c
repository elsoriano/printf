/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:10:25 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/10 15:10:29 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include "libft/libft.h"

int	main(void)
{
	int		len1;
	int		len2;
	char	*str;
	int		nb;

	nb = 59872398;
	str = ft_strdup("World");
	len1 = printf("Hello, %s\n", str);
	printf("len printf %i\n", len1);
	len2 = ft_printf("Hello, %s\n", str);
	ft_printf("len ft_printf %i\n", len2);
	printf("print nb hex %X\n", nb);
	ft_printf("ft_printf nb hex %X\n", nb);
	free(str);
	return (0);
}
