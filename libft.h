/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:50:07 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/27 12:15:12 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
//int	ft_isalnum(int c);
//int	ft_isascii(int c);
//int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
//void	ft_bzero(void *s, size_t n);
//void	*ft_memcpy(void *dest, const void *src, size_t n);
//void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
//int	ft_toupper(int c);
//int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
//char	*ft_strrchr(const char *s, int c);
//int	ft_strncmp(const char *s1, const char *s2, size_t n);
//void	*ft_memchr(const void *s, int c, size_t n);
//int	ft_memcmp(const void *s1, const void *s2, size_t n);
//char	*ft_strnstr(const char *big, const char *little, size_t len);
//int	ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
//char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
//char	*ft_strtrim(char const *s1, char const *set);
//char	**ft_split(char const *s, char c);
//char	*ft_itoa(int n);
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//void	ft_striteri(char *s, void (*f)(unsigned int, char*));
//void	ft_putchar_fd(char c, int fd);
//void	ft_putstr_fd(char *s, int fd);

#endif
