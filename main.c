#include <stdio.h>
#include "libft.h"

int main(void)
{
    // --- Carácter ---
    char letra1 = 'j';
    char letra2 = 'K';
    char letra3 = 'Z';
    char letra4 = 'b';

    printf("toupper('%c') = %c\n", letra1, ft_toupper(letra1));
    printf("toupper('%c') = %c\n", letra2, ft_toupper(letra2));
    printf("tolower('%c') = %c\n", letra3, ft_tolower(letra3));
    printf("tolower('%c') = %c\n", letra4, ft_tolower(letra4));

    printf("isalpha('A') = %d\n", ft_isalpha('A'));
    printf("isdigit('5') = %d\n", ft_isdigit('5'));
    printf("isalnum('9') = %d\n", ft_isalnum('9'));
    printf("isascii(127) = %d\n", ft_isascii(127));
    printf("isprint(' ') = %d\n", ft_isprint(' '));

    // --- Strings ---
    const char *texto = "Hola mundo";
    printf("strlen('%s') = %zu\n", texto, ft_strlen(texto));

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

    char origen4[] = "Hola mundo";
    char destino4[20];
    size_t len4 = ft_strlcpy(destino4, origen4, sizeof(destino4));
    printf("strlcpy: destino = %s, longitud = %zu\n", destino4, len4);

    char buffer5[20] = "Hola ";
    const char *agregar = "mundo";
    size_t len5 = ft_strlcat(buffer5, agregar, sizeof(buffer5));
    printf("strlcat: %s, longitud = %zu\n", buffer5, len5);

    // --- Memoria ---
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

    char buffer2[] = "Hola mundo";
    printf("Antes (memset): %s\n", buffer2);
    ft_memset(buffer2 + 5, '*', 3);
    printf("Despues (memset): %s\n", buffer2);

    char origen[] = "1234567890";
    char destino[11];
    ft_memcpy(destino, origen, 11);
    printf("memcpy: origen = %s, destino = %s\n", origen, destino);

    char buffer3[] = "ABCDEFGHIJ";
    ft_memmove(buffer3 + 2, buffer3, 5);
    printf("memmove: ");
    for (int i = 0; i < 10; i++)
        printf("%c", buffer3[i]);
    printf("\n");

        // --- Nuevas funciones añadidas ---

    // ft_strrchr
    const char *cadena2 = "Hola mundo";
    char *resultado2 = ft_strrchr(cadena2, 'o');
    if (resultado2)
        printf("strrchr: se encontro 'o' en -> %s\n", resultado2);
    else
        printf("strrchr: 'o' no se encontro\n");

    // ft_memchr
    char datos[] = {1, 2, 3, 4, 5};
    void *ptr = ft_memchr(datos, 3, 5);
    if (ptr)
        printf("memchr: encontrado el valor 3 en la posicion %ld\n", (long)((char *)ptr - datos));
    else
        printf("memchr: valor no encontrado\n");

    // ft_memcmp
    char cmp1[] = "Hola";
    char cmp2[] = "Holi";
    printf("memcmp: resultado = %d\n", ft_memcmp(cmp1, cmp2, 4));

    // ft_strnstr
    const char *texto2 = "Esta es una cadena de prueba";
    const char *busqueda = "cadena";
    char *res = ft_strnstr(texto2, busqueda, 25);
    if (res)
        printf("strnstr: se encontro \"%s\" -> %s\n", busqueda, res);
    else
        printf("strnstr: no se encontro \"%s\"\n", busqueda);

    // ft_atoi
    const char *numtxt = "  -1234abc";
    int numero = ft_atoi(numtxt);
    printf("atoi: \"%s\" -> %d\n", numtxt, numero);

    // ft_calloc
    int *array = (int *)ft_calloc(5, sizeof(int));
    if (array)
    {
        printf("calloc: array inicializado =");
        for (int i = 0; i < 5; i++)
            printf(" %d", array[i]);
        printf("\n");
        free(array);
    }

    return 0;
}