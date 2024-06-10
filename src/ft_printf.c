/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:08:19 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/10 19:01:09 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_printargs(const char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		len += ft_puthexptr(va_arg(ap, unsigned long long));
	else if (c == 'd' || c == 'i')
		len += ft_putdigit(va_arg(ap, int));
	else if (c == 'u')
		len += ft_putuint(va_arg(ap, unsigned int));
	else if (c == 'X' || c == 'x')
		len += ft_puthexnb(c, va_arg(ap, unsigned int));
	else if (c == '%')
	{
		write(1, "%", 1);
		len++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	const char		*buff;
	int				len;

	buff = str;
	if (!str || ft_strlen(str) == 0)
		return (0);
	len = 0;
	va_start(ap, str);
	while (*buff)
	{
		if (*buff != '%')
		{
			write(1, &(*buff), 1);
			len++;
		}
		else if (*(buff + 1))
			len = len + ft_printargs(*(buff++ + 1), ap);
		if (*buff)
			buff++;
	}
	va_end(ap);
	return (len);
}
