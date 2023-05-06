/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:50:19 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/05 18:37:10 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>
#include "libft.h"

/*

memmove
strlcpy
strlcat
strchr
strrchr
strncmp
memchr
memcmp
strnstr
atoi

In order to implement the two following functions, you will use malloc():
• calloc
• strdup
*/

int	main(void)
{

	char	str1[] = "Hello Weltt......";
	char	str2[] = "Hello Weltt......";
	char	dst1[] = "Byeee World";
	char	dst2[] = "Byeee World";
	size_t n = 5;

	//printf("Dst: %s\n", (char *)ft_memmove(dst1, str1, n));
	//printf("Dst: %s\n", (char *)memmove(dst2, str2, n));

	//printf("%s\n", dst1);
	//printf("%s\n", dst2);

	char	str[20] = "Moin User!";
	char	str3[20] = "Moin User!";
	memmove(str + 5, str, 12);
	ft_memmove(str3 + 5, str3, 12);
	printf("%s\n", str);
	printf("%s\n", str3);
	return (0);

}
