/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:24:29 by bcai              #+#    #+#             */
/*   Updated: 2023/10/27 00:40:30 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;
	int	len;
	int	i;

	len = 0;
	while (s1[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while(i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;

	char	*p1;
	char	*p2;
	p1 = ft_strdup(argv[1]);
	p2 = strdup(argv[1]);
	printf("my function %s\n", p1);
	printf("official strdup %s\n", p2);
	free(p1);
	free(p2);
	return (0);
}*/
