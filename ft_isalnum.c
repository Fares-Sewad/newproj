/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:26:35 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:08:11 by fsewad           ###   ########.fr       */
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

int	ft_isalpha(int input)
{
	if ((input >= 97 && input <= 122) || (input >= 65 && input <= 90))
		return (1);
	else
		return (0);
}

int	ft_isalnum(int input)
{
	if (ft_isdigit(input) || ft_isalpha(input))
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
    printf(" this = %d",ft_isalnum('6'));
    return 0;
}*/
