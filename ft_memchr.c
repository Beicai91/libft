/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:54:19 by bcai              #+#    #+#             */
/*   Updated: 2023/10/26 22:59:02 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	c = (unsigned char)c;
	while (*p && n)
	{
		if (*p == c)
			return (p);
		n--;
		p++;
	}
	return (NULL);
}
