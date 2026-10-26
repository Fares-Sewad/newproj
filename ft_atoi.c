/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:32:27 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:06:19 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long	reval;
	int			i;
	int			nega;

	reval = 0;
	nega = 1;
	i = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		nega = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		reval = (reval * 10) + (nptr[i] - '0');
		i++;
	}
	return ((int)(reval * nega));
}
/*
int	main(void)
{
char	*ptr = "       -2147483648fares2683";

printf("%d\n", ft_atoi(ptr));
char	*pttr = "       -2147483648fares2683";

printf("%d\n", atoi(pttr));
return (0);
}*/
