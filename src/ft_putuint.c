/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:49:07 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/10 17:53:40 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

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
	len = ft_uintoa(len, nbr);
	return (len);
}
