/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:55:49 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/25 16:02:30 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

// # include <stddef.h>

int		ft_isascii(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_bzero(void *s, size_t n);
int		ft_isprint(int c);
char	*ft_strchr(char *str, char c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_tolower(int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strrchr(char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t num_blocks, size_t block_size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_itoa(int n);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
#endif
