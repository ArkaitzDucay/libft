# 📚 Libft

Este proyecto forma parte del programa 42 y consiste en reimplementar funciones básicas de la librería estándar de C (`libc`), construyendo una librería propia llamada `libft.a`.

---

## 📁 Estructura del proyecto

- `libft.h` → Declaraciones de todas las funciones  
- `*.c` → Implementaciones de cada función  
- `Makefile` → Compila `libft.a` y un programa de prueba (`test.exe`)  
- `main.c` → Programa para testear las funciones implementadas

---

## 🛠️ Compilación y uso

```bash
make         # Compila libft.a
make test    # Compila main.c junto con libft.a (test.exe)
./test.exe   # Ejecuta el programa de prueba
make clean   # Elimina archivos .o
make fclean  # Elimina archivos .o, libft.a y test.exe
make re      # Limpia y recompila todo
```

---

## 📦 Información del proyecto

### ✅ Funciones implementadas

| Nº  | Función        | Descripción                                           |
|-----|----------------|--------------------------------------------------------|
| 1   | `ft_isalpha`   | Comprueba si un carácter es alfabético                |
| 2   | `ft_isdigit`   | Comprueba si un carácter es un dígito decimal         |
| 3   | `ft_isalnum`   | Comprueba si un carácter es alfanumérico              |
| 4   | `ft_isascii`   | Comprueba si un carácter pertenece a la tabla ASCII   |
| 5   | `ft_isprint`   | Comprueba si un carácter es imprimible                |
| 6   | `ft_strlen`    | Calcula la longitud de una cadena                     |
| 7   | `ft_bzero`     | Pone a cero un bloque de memoria                      |
| 8   | `ft_memset`    | Rellena un bloque de memoria con un byte              |
| 9   | `ft_memcpy`    | Copia memoria sin solapamiento                        |
| 10  | `ft_memmove`   | Copia memoria con soporte de solapamiento             |
| 11  | `ft_strlcpy`   | Copia cadenas con protección de tamaño                |
| 12  | `ft_strlcat`   | Concatena cadenas dentro de un límite de tamaño       |
| 13  | `ft_toupper`   | Convierte un carácter a mayúscula                     |
| 14  | `ft_tolower`   | Convierte un carácter a minúscula                     |
| 15  | `ft_strchr`    | Busca un carácter en una cadena (primer aparición)    |
| 16  | `ft_strdup`    | Duplica una cadena reservando memoria                 |
| 17  | `ft_strncmp`   | Compara dos cadenas hasta un número determinado       |

### 🔍 Estado

🔧 **17/23 funciones obligatorias completadas**  
🚧 Próximas a implementar: `strrchr`, `memchr`, `memcmp`, `strnstr`, `atoi`, `calloc`, `...`

### 👤 Autor

**Arkaitz Ducay**  
42 Urduliz  
[GitHub: ArkaitzDucay](https://github.com/ArkaitzDucay)

---