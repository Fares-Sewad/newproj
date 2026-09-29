/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:11:18 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 18:17:09 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
#define LIB_H

#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

int	ft_atoi(const char *nptr);
int	calcspaces(const char *nptr);
int	ft_isalpha(int input);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nelem, size_t elsize);
int	ft_isalnum(int input);
int	ft_isascii(int input);
int	ft_isdigit(int input);
int	ft_isprint(int input);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int	size(const char *s);
int	ft_tolower(int c);
int	ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif
