#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>  // Para size_t
# include <stdlib.h>  // Para malloc, calloc
# include <unistd.h>  // Para write

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
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

// --- Strings ---
char    *ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

// --- Conversión y reserva ---
int     ft_atoi(const char *str);
void    *ft_calloc(size_t count, size_t size);

#endif
