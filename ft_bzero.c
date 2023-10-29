/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:58:52 by bcai              #+#    #+#             */
/*   Updated: 2023/10/28 19:18:34 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return ;
	while (p[i] != 0 && i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int	main(int argc, char *argv[])
{
		(void)argc;
		size_t n;

		n = atoi(argv[2]);
		ft_bzero(argv[1], n);
		bzero(argv[1], n);
		printf("my function %s\n", argv[1]);
		printf("official bzero %s\n", argv[1]);
		return (0);
}*/
