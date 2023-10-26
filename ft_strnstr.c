/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:02:00 by bcai              #+#    #+#             */
/*   Updated: 2023/10/26 23:29:58 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*ph;
	char		*pn;
	size_t	i;
	size_t	nlen;

	pn = (char *)needle;
	ph = (char *)haystack;
	nlen = 0;
	while (pn[nlen])
		nlen++;
	if (needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (*ph++ && len-- > 0)
	{
		if (*ph == *pn)
		{
			while (ph[i] == pn[i])
				i++;
			if (i == nlen)
				return (ph);
		}
	}
	return (NULL);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;

	size_t len = atoi(argv[3]);
	printf("my function %p\n", ft_strnstr(argv[1], argv[2], len));
	printf("official strnstr %p\n", strnstr(argv[1], argv[2], len));
	return (0);
}*/
