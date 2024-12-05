/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreule <dreule@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:25:46 by dreule            #+#    #+#             */
/*   Updated: 2024/12/05 11:55:23 by dreule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_printf/ft_printf.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


//The isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.
int		ft_isalpha(int c);


//The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only:
//  ``0''         ``1''         ``2''         ``3''         ``4''
//  ``5''         ``6''         ``7''         ``8''         ``9''
int		ft_isdigit(int c);


//The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.
int		ft_isalnum(int c);


//The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
int		ft_isascii(int c);


// The isprint() function tests for any printing character, including space (` ').  The value of the argument must be representable as an unsigned char or the value of EOF.
int		ft_isprint(int c);


// The strlen() function computes the length of the string s.  The strnlen() function attempts to compute the length of s, but never scans beyond the first maxlen bytes of s.
size_t	ft_strlen(const char *str);


// The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
void	*ft_memset(void *b, int c, size_t len);


// The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF.
int		ft_toupper(int c);


// The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.
int		ft_tolower(int c);


// The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the func-
//      tions locate the terminating `\0'.
//      The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
char	*ft_strchr(const char *str, int c);


// The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the func-
//      tions locate the terminating `\0'.
//      The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
char	*ft_strrchr(const char *str, int c);


// The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.
// The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.
int		ft_strncmp(const char *s1, const char *s2, size_t n);


// The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n);


// The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
void	*ft_memchr(const void *s, int c, size_t n);


// The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
void	*ft_memcpy(void *dst, const void *src, size_t n);


// The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
int		ft_memcmp(const void *s1, const void *s2, size_t n);


// The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
void	*ft_memmove(void *dst, const void *src, size_t len);


// strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);


// The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0' character are
// not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);


// strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in
// practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);


// The atoi() function converts the initial portion of the string pointed to by str to int representation.
int		ft_atoi(const char *str);


// The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value
// zero.
void	*ft_calloc(size_t count, size_t size);


// The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).
// If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
char	*ft_strdup(const char *s1);


// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len);


// Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
char	*ft_strjoin(char const *s1, char const *s2);


// Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set);


// Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the  character ’c’ as a delimiter. The array must end with a NULL pointer.
char	**ft_split(char const *s, char c);


// Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
char	*ft_itoa(int n);


// Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the results from the successive applications of f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));


// Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));


// Outputs the character ’c’ to the given file descriptor.
void	ft_putchar_fd(char c, int fd);


// Outputs the string ’s’ to the given file descriptor.
void	ft_putstr_fd(char *s, int fd);


// Outputs the string ’s’ to the given file descriptor followed by a newline.
void	ft_putendl_fd(char *s, int fd);


// Outputs the integer ’n’ to the given file descriptor.
void	ft_putnbr_fd(int n, int fd);


// Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
t_list	*ft_lstnew(void *content);


// Adds the node ’new’ at the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new);


// Counts the number of nodes in a list.
int		ft_lstsize(t_list *lst);


// Returns the last node of the list.
t_list	*ft_lstlast(t_list *lst);


// Adds the node ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new);


// Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.
void	ft_lstdelone(t_list *lst, void (*del)(void*));


// Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
void	ft_lstclear(t_list **lst, void (*del)(void*));


// Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
void	ft_lstiter(t_list *lst, void (*f)(void *));


// Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif