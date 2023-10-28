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

void	special_num(char *p)
{
	p[0] = '-';
	p[1] = '2';
	p[2] = '1';
	p[3] = '4';
	p[4] = '7';
	p[5] = '4';
	p[6] = '8';
	p[7] = '3';
	p[8] = '6';
	p[9] = '4';
	p[10] = '8';
	p[11] = '\0';
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

void	positive(int n, char *p)
{
	int	len;

	len = get_len(n);
	while (len - 1 >= 0)
	{
		p[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*p;

	p = malloc(sizeof(char) * 12);
	if (n == -2147483648)
		special_num(p);
	if (n < 0 && n != -2147483648)
	{
		p[0] = '-';
		n = -n;
		positive(n, p + 1);
		p[get_len(n) + 1] = '\0';
	}
	else if (n >= 0)
	{
		positive(n, p);
		p[get_len(n)] = '\0';
	}
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
