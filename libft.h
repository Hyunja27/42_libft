/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:32:23 by hyunja            #+#    #+#             */
/*   Updated: 2020/10/05 16:35:24 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char			*ft_strnstr(const char *str, const char *to_find, size_t n);
int				ft_isdigit(int n);
void			ft_putstr_fd(char *s, int fd);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int				ft_strlen(const char *str);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void			inttochar_fd(int n, int fd);
char			*ft_strchr(char *str, int tg);
void			ft_bzero(void *p, size_t n);
char			*ft_strjoin(char const *s1, char const *s2);
int				isascii(int n);
void			*ft_memcpy(void *dest, void *src, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
void			*ft_memccpy(void *dest, void *src, int c, size_t n);
int				isprint(int n);
void			ft_putendl_fd(char *s, int fd);
int				toupper(int n);
int				is_cutter(char c, char *charset);
char			*strrchr(const char *str, int tg);
int				isalpha(int c);
void			*ft_memchr(void *p, int tg, size_t n);
void			ft_putchar_fd(char c, int fd);
void			*ft_memset(void *p, int tg, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				inornot(const char *set, char n);
void			*ft_memmove(void *dest, void *src, size_t n);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
void			*ft_calloc(size_t many, size_t size);
char			*ft_strdup(const char *str);
int				ft_atoi(char *str);
int				isalnum(int n);
char			*ft_itoa(int n);
int				tolower(int n);
#endif