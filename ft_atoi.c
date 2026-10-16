/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 11:11:44 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:07:25 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	reval;
	int	nega;

	reval = 0;
	nega = 1;
	i = 0;
	while (nptr[i] <= 32 && nptr[i] >= 0)
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
	return (reval * nega);
}

/*int	main(void)
{
char	*ptr = "       +0253fares2683";

printf("%d\n", ft_atoi(ptr));
char	*pttr = "       +0253fares2683";

printf("%d\n", atoi(pttr));
return (0);
}*/
