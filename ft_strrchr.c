/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:02:14 by bcai              #+#    #+#             */
/*   Updated: 2023/10/23 17:57:57 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, char c)
{
	int		i;
	int		len;
	char	*position;

	position = NULL;
	len = 0;
	while (s[len])
		len++;
	if (c == '\0')
		position = s + len;	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			position = s + i;
		i++;
	}
	return (position);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	char *p;
	char *p2;

	p = ft_strrchr(argv[1], argv[2][0]);
	p2 = strrchr(argv[1], argv[2][0]);
	printf("My function's result is %p\n", p);
	printf("The official strrchr's result is %p", p2);
	return (0);
}*/
