/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:37:59 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/25 21:20:12 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
	#define LIB_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
#include <errno.h>
#include <stddef.h>
#include <time.h>
#include <assert.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;


#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
#include <errno.h>
#include <stddef.h>
#include <time.h>
#include <assert.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list 			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int				is_charset(char *s, char *charset);
int				is_n_charset(const char *s, const char *charset, size_t len);
int				is_in_charset(char *s, char *charset);
int				in_charset(const char s, const char *charset);
char			**ft_ultimate_split(char *s, char *charset);
size_t			ft_ultimate_len(char **s);
void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putnbr(int n);
size_t			ft_ultimate_lenlen(char **s);
size_t			ft_strnlen(const char *s, size_t n);
size_t			ft_str_start_nlen(const char *s, size_t start ,size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_ultimate_malerror(char **s, char *s2);
void	ft_free(char **s);
void	ft_int_free(int **s);
char	**ft_ulti_malerror(char **s);
size_t	*ft_set_ultimate_len(char *s, char c, size_t nbr_mot);
char	**ft_ultimate_malloc(size_t nbr_mot, size_t *len_str);


#endif
