/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:58:52 by bcai              #+#    #+#             */
/*   Updated: 2023/11/02 12:04:01 by bcai             ###   ########.fr       */
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

	if (!s)
		return ;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
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
