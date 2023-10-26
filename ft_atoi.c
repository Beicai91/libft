/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:31:08 by bcai              #+#    #+#             */
/*   Updated: 2023/10/27 00:10:43 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*p;
	int	i;
	int	indicator;
	int	result;

	p = (char *)str;
	i = 0;
	indicator = 1;
	result = 0;
	while((p[i] >= 9 && p[i] <= 13) || p[i] == 32)
		i++;
	if (p[i] == '-' || p[i] == '+')
	{
		if (p[i] == '-')
			indicator *= -1;
		i++;
	}
	while (p[i] >= '0' && p[i] <= '9')
	{
		result = result * 10 + (p[i] - 48) * indicator;
		i++;
	}
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;

	printf("my function %d\n", ft_atoi(argv[1]));
	printf("official atoi %d\n", atoi(argv[1]));
	return (0);
}*/
