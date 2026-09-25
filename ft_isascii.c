/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:35:53 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/22 14:37:23 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isascii(int input)
{
	if (input >= 0 && input <= 127)
		return (1);
	else
		return (0);
}
/*
int main()
{
    //ft_isalpha(67);
    //int x = 5;
    //x = isdigit(x);
    printf(" this = %d\n",isascii(200));
    printf(" this = %d",ft_isascii(0x80));
    return 0;
}*/
