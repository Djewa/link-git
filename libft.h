#ifndef LIBFT_H
# define LIBFT_T

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
    void        *context;
    struct s_list *next;
}   t_list;

typedef struct s_split_next
{
    size_t start;
    size_t length;
}   t_split_next;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *str, const char *find, size_t len);
size_t ft_strlen(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t destsize);
size_t ft_strlcpy(char *dest, const char *src, size_t destsize);

void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *s1, const void *s2, size_t len);
void *ft_memset(void *b, int c, size_t len);
void *ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s);

#endif