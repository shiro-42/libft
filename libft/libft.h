/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:49:42 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:17:35 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
/*
*********************** Includes ***********************************************
*/
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# define FALSE 0
# define TRUE !FALSE

# define DEBUG			0

# define INT			0
# define CHAR			1
# define STRING			2
# define ARRAY_INT		3

# define FIRST			0
# define LAST			-1

# define ABS(X) ((X) < 0 ? - (X) : (X))
# define H1(...) FIRST_HELPER(__VA_ARGS__)
# define H2(...) SECOND_HELPER(__VA_ARGS__)
# define FIRST_HELPER(first, ...) (first ? first : NULL)
# define SECOND_HELPER(first, second, ...) (second ? second : NULL)
# define M(...) METHOD_ARGS_HELPER(__VA_ARGS__)
# define METHOD_ARGS_HELPER(first, second, ...) __VA_ARGS__
# define METHOD_STATIC(...) (H2(__VA_ARGS__)(H1(__VA_ARGS__)))
# define METHOD(...) (H2(__VA_ARGS__) (H1(__VA_ARGS__), M(__VA_ARGS__)))

typedef int			t_bool;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct			s_int
{
	char				name;
	int					len;
	int					*array;
}						t_int;

typedef struct			s_node
{
	void				*data;
	int					type;
	struct s_node		*left;
	struct s_node		*right;
	void				(*put)(struct s_node *);
}						t_node;

typedef struct			s_circle
{
	struct s_node		*origin;
	int					length;
	void				(*push_front)(struct s_circle *, t_node *);
	void				(*push_back)(struct s_circle *, t_node *);
	void				(*insert)(struct s_circle *, int, t_node *);
	void				(*rotate_right)(struct s_circle *);
	void				(*rotate_left)(struct s_circle *);
	struct s_node		*(*shift)(struct s_circle *);
	struct s_node		*(*pop)(struct s_circle *);
	void				(*delete_index)(struct s_circle *, int);
	void				(*put)(struct s_circle *);
	void				(*put_reverse)(struct s_circle *);
	void				(*delete)(struct s_circle *, int);
	int					(*some)(struct s_circle *, int (*f)(t_node *));
	struct s_iterator	*(*keys)(struct s_circle *);
}						t_circle;

typedef struct			s_iterator
{
	int					index;
	int					max;
	t_bool				done;
	void				(*next)(struct s_iterator *);
}						t_iterator;

/*
*********************** Libft *************************************************
*/
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *str, const char *search, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **ap);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_lstsize(t_list *lst);
t_list				*ft_lstat(t_list *lst, size_t index);
char				*ft_strndup(const char *s, size_t n);
int					ft_iscntrl(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isxdigit(int c);

/*
*********************** Functional ************************************
*/
void				end_line(void);
int					*new_int_ptr(int data);
int					count_bits(int num);

/*
*********************** Table Int ************************************
*/
void				ft_shift_right(t_int *data);
void				ft_shift(t_int *data);

/*
*********************** Foreach **************************************
*/
void				foreach_char(char *string, char (*f)(char));
void				array_strings_foreach(char **args, char *(*f)(char *));

/*
*********************** Map ******************************************
*/
char				*string_map(char *string, char (*f)(char));

/*
*********************** List Circular ********************************
*/
t_circle			*new_list_circular(void *data, int type);
void				list_circular_push_front(t_circle *self, t_node *node);
void				list_circular_push_back(t_circle *self, t_node *node);
void				list_circular_rotate_right(t_circle *self);
void				list_circular_rotate_left(t_circle *self);
t_node				*list_circular_shift(t_circle *self);
t_node				*list_circular_pop(t_circle *self);
void				list_circular_put(t_circle *self);
void				list_circular_put_reverse(t_circle *self);
void				list_circular_insert(t_circle *self, int d, t_node *n);
void				list_circular_delete(t_circle *self, int index);
t_bool				list_circular_some(t_circle *self, t_bool (*f)(t_node *));
void				iterator_next(t_iterator *self);
t_iterator			*list_circular_get_keys(t_circle *self);

/*
*********************** Node ****************************************
*/
t_node				*new_node(void *data, int type);
void				node_put(t_node *self);

/*
*********************** Error ***************************************
*/
void				throw_error(char *error);

#endif
