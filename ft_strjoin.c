/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:01:30 by bcai              #+#    #+#             */
/*   Updated: 2023/10/27 12:42:29 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*join;

	len = ft_strlen(s1) + ft_strlen(s2);
	printf("total length %d\n", len);
	join = (char *)malloc((len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcat(join, s1, len + 1);
	ft_strlcat(join, s2, len + 1);
	return (join);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	printf("the joined string is %s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}*/
