/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:40:50 by bcai              #+#    #+#             */
/*   Updated: 2023/10/27 23:05:56 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	special_num(char **p)
{
	*p = malloc(sizeof(char) * 12);
	if (!(*p))
		return ;
	(*p)[0] = '-';
	(*p)[1] = '2';
	(*p)[2] = '1';
	(*p)[3] = '4';
	(*p)[4] = '7';
	(*p)[5] = '4';
	(*p)[6] = '8';
	(*p)[7] = '3';
	(*p)[8] = '6';
	(*p)[9] = '4';
	(*p)[10] = '8';
	(*p)[11] = '\0';
}

int	get_len(int n)
{
	int	len;
	int	replace;

	len = 0;
	replace = n;
	while (replace / 10 > 0)
	{
		replace = replace / 10;
		len++;
	}
	len++;
	return (len);
}

void	negative(int n, char **p)
{
	int	len;
	int	len2;

	len = get_len(n) + 1;
	len2 = len;
	(*p) = malloc(sizeof(char) * (len + 1));
	if (!(*p))
		return ;
	(*p)[0] = '-';
	while (len - 1 > 0)
	{
		(*p)[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	(*p)[len2] = '\0';
}

void	positive(int n, char **p)
{
	int	len;
	int	len2;

	len = get_len(n);
	len2 = len;
	(*p) = malloc(sizeof(char) * (len + 1));
	if (!(*p))
		return ;
	while (len - 1 >= 0)
	{
		(*p)[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	(*p)[len2] = '\0';
}

char	*ft_itoa(int n)
{
	char	*p;

	if (n == -2147483648)
		special_num(&p);
	if (n < 0 && n != -2147483648)
	{
		n = -n;
		negative(n, &p);
	}
	else if (n >= 0)
		positive(n, &p);
	return (p);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	char *p;

	int	n = atoi(argv[1]);
	p = ft_itoa(n);
	printf("%s\n", p);
	free(p);
	return (0);
}*/
