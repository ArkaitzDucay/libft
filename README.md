# 📚 Libft

Este proyecto forma parte del programa 42 y consiste en reimplementar funciones basicas de la libreria estandar de C (`libc`), construyendo una libreria propia llamada `libft.a`.

---

## 📁 Estructura del proyecto

- `libft.h` → Declaraciones de todas las funciones  
- `*.c` → Implementaciones de cada funcion  
- `Makefile` → Compila `libft.a` y un programa de prueba (`test.exe`)  
- `main.c` → Programa para testear las funciones implementadas

---

## 🛠️ Compilacion y uso

```bash
make         # Compila libft.a
make test    # Compila main.c junto con libft.a (test.exe)
./test.exe   # Ejecuta el programa de prueba
make clean   # Elimina archivos .o
make fclean  # Elimina archivos .o, libft.a y test.exe
make re      # Limpia y recompila todo
```

---

## 📦 Informacion del proyecto

### ✅ Funciones implementadas

| Nº  | Funcion         | Descripcion                                          |
|-----|------------------|------------------------------------------------------|
| 1   | `ft_isalpha`     | Comprueba si un caracter es alfabetico              |
| 2   | `ft_isdigit`     | Comprueba si un caracter es un digito decimal       |
| 3   | `ft_isalnum`     | Comprueba si un caracter es alfanumerico            |
| 4   | `ft_isascii`     | Comprueba si un caracter pertenece a ASCII          |
| 5   | `ft_isprint`     | Comprueba si un caracter es imprimible              |
| 6   | `ft_strlen`      | Calcula la longitud de una cadena                   |
| 7   | `ft_bzero`       | Pone a cero un bloque de memoria                    |
| 8   | `ft_memset`      | Rellena un bloque de memoria con un byte            |
| 9   | `ft_memcpy`      | Copia memoria sin solapamiento                      |
| 10  | `ft_memmove`     | Copia memoria con soporte de solapamiento           |
| 11  | `ft_strlcpy`     | Copia cadenas con proteccion de tamaño              |
| 12  | `ft_strlcat`     | Concatena cadenas dentro de un limite de tamaño     |
| 13  | `ft_toupper`     | Convierte un caracter a mayuscula                   |
| 14  | `ft_tolower`     | Convierte un caracter a minuscula                   |
| 15  | `ft_strchr`      | Busca un caracter en una cadena (primera aparicion) |
| 16  | `ft_strdup`      | Duplica una cadena reservando memoria               |
| 17  | `ft_strncmp`     | Compara dos cadenas hasta un numero determinado     |
| 18  | `ft_strrchr`     | Busca un caracter en una cadena (ultima aparicion)  |
| 19  | `ft_memchr`      | Busca un byte en memoria                            |
| 20  | `ft_memcmp`      | Compara dos bloques de memoria                      |
| 21  | `ft_strnstr`     | Busca una subcadena dentro de otra con limite       |
| 22  | `ft_atoi`        | Convierte una cadena a entero                       |
| 23  | `ft_calloc`      | Reserva memoria e inicializa a cero                 |

---

### 👤 Autor

**Arkaitz Ducay**  
42 Urduliz  
[GitHub: ArkaitzDucay](https://github.com/ArkaitzDucay)

---