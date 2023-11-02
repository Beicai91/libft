/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:36:23 by bcai              #+#    #+#             */
/*   Updated: 2023/11/02 12:35:19 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
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
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	else
	{
		i = dst_len;
		j = 0;
		while (i < dstsize - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (dst_len + src_len);
	}
}
/*
int	main(void)
{
	char	dst1[10] = "";
	char	src1[] = "lorem ipsum dolor sit amet";
	char	dst2[10] = "";
	char src2[] = "lorem ipsum dolor sit amet";
	size_t	res1 = ft_strlcat(dst1, src1, 0);
	size_t	res2 = strlcat(dst2, src2, 0);
	printf("my function %zu\n", res1);
	printf("official strlcat %zu\n", res2);
	printf("my function concatenate result %s\n", dst1);
	printf("official strlcat concatenate result %s\n", dst2);
	return (0);
}*/
