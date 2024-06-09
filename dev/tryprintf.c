/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tryprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:02:27 by rhernand          #+#    #+#             */
/*   Updated: 2024/06/09 14:34:45 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	ptr[] = "Hello World";
	
	printf("two arg 1 percentage %d\n", 6, 4);
	printf("two percentage 1 arg %d %%\n", 5);
	// printf("wrong simbol %c\n", 50);
	printf("percentage s digit argument %d\n", 50);
	printf("no percentage \n", 20);
	printf("", 6);
	printf("char percentage string argument %s\n", "qthello World");
	printf("example hex ptr %p\n", ptr);
	printf("example hex ptr %p\n", &ptr);
	// printf("value of memory %c\n", *0x7fffffffd61c);
	// printf("wrong conversion char %t\n", 7);
}