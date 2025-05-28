#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return (char *)haystack;

    for (i = 0; haystack[i] && i < len; i++)
    {
        j = 0;
        while (needle[j] && haystack[i + j] && (i + j) < len && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return (char *)(haystack + i);
    }
    return NULL;
}