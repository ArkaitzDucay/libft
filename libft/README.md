# Libft

Este proyecto forma parte del programa 42 y consiste en reimplementar funciones basicas de la libreria estandar de C (`libc`), construyendo una libreria propia llamada `libft.a`.

## 📂 Estructura

- `libft.h` → Header con todas las declaraciones
- `*.c` → Implementaciones de cada funcion
- `Makefile` → Compila `libft.a` y un programa de pruebas (`test.exe`)
- `main.c` → Programa para probar las funciones implementadas

## 🔧 Compilacion

```bash
make        # Compila libft.a
make test   # Compila main.c junto con libft.a en test.exe
./test.exe  # Ejecuta el programa de prueba
make clean  # Borra archivos .o y main.o
make fclean # Borra todo lo generado (libft.a, test.exe, .o)
```

## ✅ Funciones implementadas (hasta ahora)

| Numero | Funcion       | Descripcion                                     |
|--------|----------------|-------------------------------------------------|
| 1      | `ft_strlen`    | Calcula la longitud de una cadena               |
| 2      | `ft_bzero`     | Pone a cero un bloque de memoria                |
| 3      | `ft_memset`    | Rellena un bloque de memoria con un byte        |
| 4      | `ft_memcpy`    | Copia memoria de forma segura (sin solapamiento)|
| 5      | `ft_memmove`   | Copia memoria con soporte de solapamiento       |
| 6      | `ft_strlcpy`   | Copia cadenas con proteccion de tamano          |
| 7      | `ft_strlcat`   | Concatena cadenas sin pasarse del limite        |
| 8      | `ft_toupper`   | Convierte un caracter a mayuscula               |
| 9      | `ft_tolower`   | Convierte un caracter a minuscula               |
| 10     | `ft_strchr`    | Busca un caracter en una cadena                 |

## 🔍 Estado

✅ Funciones obligatorias (1–10) implementadas  
🛠️ Listo para continuar con las siguientes (`strrchr`, `strncmp`, etc.)

## 📌 Autor

**Arkaitz Ducay**  
42 Urduliz  
[GitHub: ArkaitzDucay](https://github.com/ArkaitzDucay)