/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:45:40 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/06 15:45:50 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	str = "";
	while (*((char *)src) != '\0')
	{
		*str = *((char *)src);
		src++;
		str++;
	}
	*str = '\0';

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = str;
		i++;
	}
	return (dst);
}