/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 18:24:17 by fsewad            #+#    #+#             */
/*   Updated: 2026/06/06 18:26:14 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
int	main(void)
{
//#include <unistd.h>
//#include <stdio.h>
	char name[] = "123456";
	printf("this is count = %d", ft_strlen(name)); 
	
	
	//	cc -Wall -Wextra -Werror  
}*/
