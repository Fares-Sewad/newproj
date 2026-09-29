/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:04:38 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:08:25 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int input)
{
	if (input >= '0' && input <= '9')
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
    printf(" this = %d",ft_isdigit('f'));
    return 0;
}*/
