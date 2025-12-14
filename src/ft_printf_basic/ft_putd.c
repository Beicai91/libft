/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caibei <caibei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:58:52 by bcai              #+#    #+#             */
/*   Updated: 2025/12/14 23:55:40 by caibei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putd(int n, int *error)
{
	int		print_len;
	char	*str;

	str = ft_itoa(n);
	if (!str)
	{
		*error = -1;
		return (0);
	}
	print_len = ft_strlen(str);
	*error = write(1, str, print_len);
	free(str);
	return (print_len);
}
