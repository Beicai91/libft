/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caibei <caibei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:13:51 by bcai              #+#    #+#             */
/*   Updated: 2025/12/14 23:54:43 by caibei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_len(char *s, int fd, int *error)
{
	int	len;

	if (s == NULL)
	{
		*error = write(fd, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	*error = write(fd, s, len);
	return (len);
}
