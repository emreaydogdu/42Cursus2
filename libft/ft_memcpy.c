/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:14:44 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/06 15:35:12 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	while (n--)
		((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
