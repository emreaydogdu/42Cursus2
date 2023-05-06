/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:38:56 by emaydogd          #+#    #+#             */
/*   Updated: 2023/05/06 15:39:01 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(char *str, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
//strlcpy
//strlcat
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(char *str, int c);
//ft_strrchr
//ft_strncmp
//ft_memchr
//ft_memcmp
//ft_strnstr
//ft_atoi


#endif
