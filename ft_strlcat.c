/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:36:23 by bcai              #+#    #+#             */
/*   Updated: 2023/10/28 01:22:03 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	int		j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize - 1 < src_len)
		return (dstsize + src_len);
	else
		return (dst_len + src_len);
}
/*
int	main(void)
{
	char	dst1[20] = "moray";
	char	src1[] = "banana";
	char	dst2[20] = "moray";
	char src2[] = "banana";
	size_t	res1 = ft_strlcat(dst1, src1, 3);
	size_t	res2 = strlcat(dst2, src2, 3);
	printf("my function %zu\n", res1);
	printf("official strlcat %zu\n", res2);
	printf("my function concatenate result %s\n", dst1);
	printf("official strlcat concatenate result %s\n", dst2);
	return (0);
}*/
