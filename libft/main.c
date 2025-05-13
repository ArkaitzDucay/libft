#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *texto = "Hola mundo";
    size_t longitud = ft_strlen(texto);

    printf("Longitud de '%s' es %zu\n", texto, longitud);
    return 0;
}
