#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Test ft_strlen
    const char *texto = "Hola mundo";
    size_t longitud = ft_strlen(texto);
    printf("Longitud de '%s' es %zu\n", texto, longitud);

    // Test ft_bzero
    char buffer1[] = "Hola mundo";
    printf("Antes (bzero): %s\n", buffer1);
    ft_bzero(buffer1 + 4, 5);
    printf("Despues (bzero):");
    for (int i = 0; i < 11; i++)
    {
        if (buffer1[i] == 0)
            printf(" \\0");
        else
            printf(" %c", buffer1[i]);
    }
    printf("\n");

    // Test ft_memset
    char buffer2[] = "Hola mundo";
    printf("Antes (memset): %s\n", buffer2);
    ft_memset(buffer2 + 5, '*', 3);
    printf("Despues (memset): %s\n", buffer2);

    // Test ft_memcpy
    char origen[] = "1234567890";
    char destino[11];
    ft_memcpy(destino, origen, 11); // copiamos toda la cadena (incluye el '\0')
    printf("Despues (memcpy): origen = %s, destino = %s\n", origen, destino);

    // Test ft_memmove
    char buffer3[] = "ABCDEFGHIJ";
    ft_memmove(buffer3 + 2, buffer3, 5); // Mueve "ABCDE" a la posicion 2
    printf("Despues (memmove): %s\n", buffer3);

    // Test ft_strlcpy
    char origen4[] = "Hola mundo";
    char destino4[20];
    size_t len4 = ft_strlcpy(destino4, origen4, sizeof(destino4));
    printf("Despues (strlcpy): destino = %s, longitud = %zu\n", destino4, len4);

    // Test ft_strlcat
    char buffer5[20] = "Hola ";
    const char *agregar = "mundo";
    size_t len5 = ft_strlcat(buffer5, agregar, sizeof(buffer5));
    printf("Despues (strlcat): %s, longitud = %zu\n", buffer5, len5);

    // Test ft_toupper
    char letra1 = 'j';
    char letra2 = 'K';
    printf("toupper('%c') = %c\n", letra1, ft_toupper(letra1));
    printf("toupper('%c') = %c\n", letra2, ft_toupper(letra2));

    // Test ft_tolower
    char letra3 = 'Z';
    char letra4 = 'b';
    printf("tolower('%c') = %c\n", letra3, ft_tolower(letra3));
    printf("tolower('%c') = %c\n", letra4, ft_tolower(letra4));

        // Test ft_strchr
    const char *cadena = "Hola mundo";
    char *resultado = ft_strchr(cadena, 'm');
    if (resultado)
        printf("strchr: se encontro 'm' en -> %s\n", resultado);
    else
        printf("strchr: 'm' no se encontro\n");

    resultado = ft_strchr(cadena, 'z');
    if (resultado)
        printf("strchr: se encontro 'z' en -> %s\n", resultado);
    else
        printf("strchr: 'z' no se encontro\n");

    return 0;
}
