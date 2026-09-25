/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:17:13 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/22 12:41:22 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>
*/
int	ft_isalpha(int input)
{
	if (input >= 97 && input <= 122 || input >= 65 && input <= 90)
		return (1);
	else
		return (0);
}
/*
int main()
{
    printf(" is alpha = %d\n",ft_isalpha(100));
    return 0;
}*/
