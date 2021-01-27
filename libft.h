/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:22:42 by yfu               #+#    #+#             */
/*   Updated: 2020/12/22 12:22:02 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef enum	e_memory
{
	push,
	pop,
	clear
}				t_memory;

void			*ft_memory(size_t ec, size_t es, void *add, t_memory type);
void			*ft_memset(void *pointer, int value, size_t count);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *destination, const void *source, size_t size);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *string, int searchedchar);
char			*ft_strrchr(const char *string, int searchedchar);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
int				ft_strncmp(const char *f, const char *s, size_t len);
int				ft_atoi(const char *thestring);
int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
int				ft_toupper(int character);
int				ft_tolower(int character);
void			*ft_calloc(size_t elementcount, size_t elementsize);
char			*ft_strdup(const char *source);
size_t			ft_strlcat(char *s1, const char *s2, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_substr(char const *s, size_t start, size_t len);
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
int				ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
int				ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list **head, t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstfind(t_list *head, void	*target);
t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *));

#endif
