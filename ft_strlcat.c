/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:36:23 by bcai              #+#    #+#             */
/*   Updated: 2023/10/26 22:53:55 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;

	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	i = dst_len;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (dst_len < dstsize)
		return (dst_len + src_len);
	else
		return (dstsize + src_len);
}
