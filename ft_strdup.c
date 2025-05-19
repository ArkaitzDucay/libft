#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);
    char *dup = (char *)malloc((len + 1) * sizeof(char));

    if (!dup)
        return NULL;

    for (size_t i = 0; i <= len; i++)
        dup[i] = s[i];

    return dup;
}