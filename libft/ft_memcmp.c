/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:50:06 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/06 15:51:10 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while ((((char *)s1)[i] != ((char *)s2)[i]) && i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}
