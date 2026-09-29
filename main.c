/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:11:16 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 14:25:38 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
    char src[]= "wellcome to 42amman";
    printf("%s",ft_substr(src,6,8));
	//printf("%d\n", ft_isalpha('a'));
    //printf("%d\n", ft_atoi("           42ammanlol/*-+ololdawdkw"));
	return (0);
}