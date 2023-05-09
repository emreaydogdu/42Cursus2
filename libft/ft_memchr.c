/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:46:41 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/06 15:49:57 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	while (*(char *)str && *(char *)str != (unsigned char)c && n--)
		str++;
	if (*(char *)str == (unsigned char)c)
		return ((char *)str);
	return (0);
}
