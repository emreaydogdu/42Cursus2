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
/*
char	str1[] = "Hello Weltt......";
char	str2[] = "Hello Weltt......";
char	dst1[] = "Byeee World";
char	dst2[] = "Byeee World";
size_t n = 15;

ft_memcpy(dst1, str1, n);
memcpy(dst2, str2, n);

printf("%s\n", dst1);
printf("%s\n", dst2);
return (0);
*/