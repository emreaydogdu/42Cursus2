/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:50:19 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/08 14:05:32 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	t_fail(char *function);
void	t_succ(char *function);

#define ASSERT(condition, function) if (!(condition)) t_fail(function); else t_succ(function);

void	t_fail(char *function)
{
	printf("[%sFailed%s]   %s\n", "\033[1m\x1B[31m", "\x1B[0m", function);
}
void	t_succ(char *function)
{
	printf("[%sSucceed%s]   %s\n", "\033[1m\033[32m", "\x1B[0m", function);
}

void	t_isalpha(char c){
	ASSERT(isalpha(c) == ft_isalpha(c), "isalpha()");
}
void	t_isdigit(char c){
	ASSERT(isdigit(c) == ft_isdigit(c), "isdigit()");
}
void	t_isalnum(char c){
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
	ASSERT(isalnum(c) == ft_isalnum(c), "isalnum()");
}
void	t_isascii(char c){
	printf("%d\n", isascii(c));
	printf("%d\n", ft_isascii(c));
	ASSERT(isascii(c) == ft_isascii(c), "isascii()");
}
void	t_isprint(char c){
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
	ASSERT(isprint(c) == ft_isprint(c), "isprint()");
}
void	t_strlen(void){
	printf("%lu\n", strlen("Hello World"));
	printf("%lu\n", ft_strlen("Hello World"));
	ASSERT(strlen("Hello World") == ft_strlen("Hello World"), "strlen()");
}
void	t_memset(void){
	char	str1[20] = "42 Berlin";
	char	str2[20] = "42 Berlin";

	ft_memset(str1, '*', 2);
	memset(str2, '*', 2);
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	ASSERT(!strcmp(str1, str2), "memset()");
}
void	t_bzero(void){
	char	str1[20] = "42 Berlin";
	char	str2[20] = "42 Berlin";

	bzero(str1, 3);
	ft_bzero(str2, 3);
	printf("%s\n", str1+3);
	printf("%s\n", str2+3);
	ASSERT(!strcmp(str1+3, str2+3), "bzero()");
}
void	t_toupper(char c){
	ASSERT(toupper(c) == ft_toupper(c), "toupper()");
}
void	t_tolower(char c){
	ASSERT(tolower(c) == ft_tolower(c), "tolower()");
}
void	t_strnstr(void){
	char *big = "42 Berlin";
	char *little = "Berlin";

	printf("%s\n", strnstr(big, little, 6));
	printf("%s\n", ft_strnstr(big, little, 6));
	ASSERT(strnstr(big, little, 9) == ft_strnstr(big, little, 9), "strnstr()");
}
void	t_strncmp(void){
	char *s1 = "42 Berlin";
	char *s2 = "42 Berlin";

	printf("%d\n", strncmp(s1, s2, 9));
	printf("%d\n", ft_strncmp(s1, s2, 9));
	ASSERT(strncmp(s1, s2, 9) == ft_strncmp(s1, s2, 9), "strncmp()");
}
void	t_strchr(void){
	char *s1 = "42 Berlin";
	char *s2 = "42 Berlin";
	char c = 'B';

	//printf("%s\n", strchr(s1, c));
	//printf("%s\n", ft_strchr(s2, c));
	ASSERT(strchr(s1, c) == ft_strchr(s2, c), "strchr()");
}
void	t_strrchr(void){
	char *s1 = "42 BerBlin";
	char *s2 = "42 BerBlin";
	char c = 'B';

	//printf("%s\n", strrchr(s1, c));
	//printf("%s\n", ft_strrchr(s2, c));
	ASSERT(strrchr(s1, c) == ft_strrchr(s2, c), "strchr()");
}
void	t_strlcpy(void){
	char s1[20] = "42 Berlin";
	char s2[20] = "42 Berlin";
	char d1[20] = "99 Bremen";
	char d2[20] = "99 Bremen";

	//printf("%lu\n", strlcpy(d1, s1, sizeof(d1)));
	//printf("%lu\n", strlcpy(d2, s2, sizeof(d2)));
	ASSERT(strlcpy(d1, s1, sizeof(d1)) == ft_strlcpy(d2, s2, sizeof(d2)), "strlcpy()");
}
void	t_strlcat(void){
	char s1[20] = "42 Berlin";
	char s2[20] = "42 Berlin";
	char d1[20] = "99 Bremen";
	char d2[20] = "99 Bremen";

	//printf("%lu\n", strlcat(d1, s1, sizeof(d1)));
	//printf("%lu\n", ft_strlcat(d2, s2, sizeof(d2)));
	//printf("%s\n", d1);
	//printf("%s\n", d2);
	ASSERT(strlcat(d1, s1, sizeof(d1)) == ft_strlcat(d2, s2, sizeof(d2)), "strlcat()");

}
void	t_atoi(void){

	//printf("%d\n", atoi("45"));
	//printf("%d\n", ft_atoi("45"));
	ASSERT(atoi("45") == ft_atoi("45"), "atoi()");

}




void	t_memcpy(void){
	char	str1[21] = "a shiny white sphere";
	char	str2[21] = "a shiny white sphere";

	memcpy(str1+8, str1+2, 12);
	ft_memcpy(str2+8, str2+2, 12);
	printf("%s\n", str1);
	printf("%s\n", str2);
	ASSERT(!strcmp(str1, str2), "memcpy()");
}
void	t_memmove(void){
	char	str1[21] = "a shiny white sphere";
	char	str2[21] = "a shiny white sphere";

	memmove(str1+8, str1+2, 12);
	ft_memmove(str2+8, str2+2, 12);
	printf("%s\n", str1);
	printf("%s\n", str2);
	ASSERT(!strcmp(str1, str2), "memmove()");
}

int	main(void)
{
	/*
	t_isalpha('a');
	t_isdigit('5');
	t_isalnum('5');
	t_isascii(254);
	t_isprint(126);
	t_strlen();
t_memset();
t_bzero();
t_memcpy();
t_memmove();
t_strlcpy();
t_strlcat();
	t_toupper('c');
	t_tolower('C');
	t_strchr();
	t_strrchr();

t_strncmp();
t_strnstr();
	t_atoi();

	*/
	t_isalpha('a');
	return (0);
}
