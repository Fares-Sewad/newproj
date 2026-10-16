/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/06 18:24:17 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:40:10 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

/*int	main(void)
{
//#include <unistd.h>
//#include <stdio.h>
char name[] = "123456";
printf("this is count = %d", ft_strlen(name));

//	cc -Wall -Wextra -Werror
}*/
