#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>  // Para size_t
# include <stdlib.h>  // Para malloc (ft_strdup)
# include <unistd.h>

// --- Carácter ---
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);

// --- Memoria ---
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);

// --- Strings ---
char    *ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);


#endif
