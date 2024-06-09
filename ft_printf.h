/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:12:23 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/09 21:28:28 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putstr(char *str);
int		ft_puthexptr(unsigned long long ptr);
int		ft_putdigit(int nbr);
int		ft_putuint(unsigned int nbr);
int		ft_puthexnb(char c, int nbr);

#endif