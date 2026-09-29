/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:11:44 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:07:54 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calcspaces(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] <= 32 && nptr[i] >= 0)
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	reval;

	reval = 0;
	i = calcspaces(nptr);
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		reval = (reval * 10) + (nptr[i] - '0');
		i++;
	}
	return (reval);
}
/*
int main()
{
    char *ptr="       0253fares2683";
    printf("%d\n",ft_atoi(ptr));
    char *pttr="       0253fares2683";
    printf("%d\n",atoi(pttr));
    return 0;
}*/
