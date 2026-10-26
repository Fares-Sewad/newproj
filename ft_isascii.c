/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:33:48 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:01 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
