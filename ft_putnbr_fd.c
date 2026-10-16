/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:03:10 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:09:09 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calclength(long long num)
{
	int	co;

	co = 0;
	while (num > 0)
	{
		num /= 10;
		co++;
	}
	return (co);
}

int	power(int n, int p)
{
	int	temp;

	temp = 1;
	while (p > 0)
	{
		temp *= n;
		p--;
	}
	return (temp);
}

void	ft_putnbr_fd(int n, int fd)
{
	char		result;
	size_t		len;
	long long	num;
	int			p;

	num = n;
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	len = calclength(num);
	while (len > 0)
	{
		p = power(10, (len - 1));
		result = (num / p) + '0';
		write(fd, &result, 1);
		num %= p;
		len--;
	}
}

/*int	main(void)
{
ft_putnbr_fd(-458, 1);
//printf("# %d\n",power(10,4));
}*/
