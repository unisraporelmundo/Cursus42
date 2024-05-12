<a href="#" onclick="return false;"><img alt="42 Logo" src="https://github.com/unisraporelmundo/Cursus42/blob/main/assets/banner5.png"></a>
# Libft - Tu Primera Biblioteca en C

Libft es un proyecto que desafía a los estudiantes a crear su propia biblioteca de funciones en C, replicando y expandiendo las funcionalidades de la libc estándar. Este es uno de los primeros proyectos dentro del currículo de 42 y sirve como una base sólida para entender y aplicar conceptos fundamentales de programación en C.

## 📘 Resumen del Proyecto

Este proyecto consiste en codificar una biblioteca en C que incluirá un conjunto de funciones de propósito general. Estas funciones serán utilizadas en proyectos posteriores, facilitando el desarrollo de programas más complejos.

## 📄 Instrucciones Generales

- **Lenguaje:** Todo el proyecto debe estar escrito en C.
- **Normativa:** Seguir la normativa de codificación de 42, que incluye la prohibición de variables globales y el uso de `static` para funciones internas.
- **Compilación:** Debe incluirse un Makefile que compilará los archivos fuente con las flags `-Wall`, `-Werror` y `-Wextra`.
- **Seguridad:** No deben producirse fallos abruptos (segfault, bus error, etc.) y toda la memoria asignada debe liberarse adecuadamente.

## 🏗️ Parte Obligatoria

| Function                         | Description                                                                     | Prototype
| -------------------------------- | ----------------------------------------------------------- |-------------------------------------------------------------|                                               
| [ft_isalpha](./ft_isalpha.c) | Checks if character `c` is alphabetic.                                          | int ft_isalpha(int c);                                                           |
| [ft_isdigit](./ft_isdigit.c) | Checks if character `c` is a numeric digit.                                     | int ft_isdigit(int c);                                                           |
| [ft_isalnum](./ft_isalnum.c) | Checks if character `c` is alphanumeric.                                        | int ft_isalnum(int c);                                                           |
| [ft_isascii](./ft_isascii.c) | Checks if character `c` is an ASCII character.                                  | int ft_isascii(int c);                                                           |
| [ft_isprint](./ft_isprint.c) | Checks if character `c` is printable.                                           | int ft_isprint(int c);                                                           |
| [ft_strlen](./ft_strlen.c)   | Computes the length of the string `str`.                                        | int ft_strlen(char *str);                                                        |
| [ft_memset](./ft_memset.c)   | Fills the first `size` bytes of `str` with the byte `c`.                        | char *ft_memset(char *str, char c, size_t size);                                 |
| [ft_bzero](./ft_bzero.c)     | Sets the first `size` bytes of `str` to zero.                                   | void ft_bzero(char *str, size_t n);                                              |
| [ft_memcpy](./ft_memcpy.c)   | Copies `size` bytes from `src` to `dest`.                                       | void *ft_memcpy(void *dest, const void *src, size_t size);                       |
| [ft_memmove](./ft_memmove.c) | Copies `size` bytes from `src` to `dest`, even if they overlap.                 | void *ft_memmove(void *dest, const void *src, size_t size);                      |
| [ft_strlcpy](./ft_strlcpy.c) | Copies up to `size` characters from `src` to `dest`.                            | size_t ft_strlcpy(char *dest, const char *src, size_t size);                     |
| [ft_strlcat](./ft_strlcat.c) | Appends `src` to `dest` until reaching `size`.                                  | size_t ft_strlcat(char *dst, const char *src, size_t size);                      |
| [ft_toupper](./ft_toupper.c) | Converts character `c` to uppercase if it's lowercase.                          | int ft_toupper(int c);                                                           | 
| [ft_tolower](./ft_tolower.c) | Converts character `c` to lowercase if it's uppercase.                          | int ft_tolower(int c);                                                           |
| [ft_strchr](./ft_strchr.c)   | Locates the first occurrence of `c` in `str`.                                   | char *ft_strchr(const char *s, int c);                                           |
| [ft_strrchr](./ft_strrchr.c) | Locates the last occurrence of `c` in `str`. Iniciamos last_o en -1 porque así nos aseguramos que no ha encontrado nada, al no tener posición -1 en una string.                                   | char *ft_strrchr(const char *s, int c);                                           |
| [ft_strncmp](./ft_strncmp.c) | Compares the first `size` characters of `s1` and `s2`.                          | int ft_strncmp(const char *s1, const char *s2, size_t size);                     |
| [ft_memchr](./ft_memchr.c)   | Locates the first occurrence of `c` in `str` within a maximum of `size` bytes.  | void *ft_memchr(const void *str, int c, size_t size);                            |
| [ft_memcmp](./ft_memcmp.c)   | Compares the first `size` bytes of `s1` and `s2`.                               | int ft_memcmp(const void *s1, const void *s2, size_t size);                      |
| [ft_strnstr](./ft_strnstr.c) | Locates the first occurrence of `needle` in `haystack` within a maximum of `size` bytes. | char *ft_strnstr(const char *haystack, const char *needle, size_t size);|
| [ft_atoi](./ft_atoi.c)       | Converts a string to an integer.                                                | int ft_atoi(const char *str);                                                    |
| [ft_calloc](./ft_calloc.c)   | Allocates memory and fills it with zeros.                                       | void *ft_calloc(size_t nmemb, size_t size);                                      |
| [ft_strdup](./ft_strdup.c)   | Duplicates a dynamic string.
### Funciones de libc

Replicarás funciones estándar de la libc, como `strlen`, `memset`, y `memcpy`, pero con el prefijo `ft_` para denotar que son implementaciones propias.

### Funciones Adicionales

Crearás funciones que no se encuentran en la libc o que ofrecen funcionalidades extendidas, tales como `ft_substr` y `ft_split`.

## 🔨 Makefile

El Makefile incluirá reglas como `all`, `clean`, `fclean`, y `re` para gestionar eficientemente la compilación de la biblioteca.

## 🚀 Parte Bonus

Si completas la parte obligatoria con éxito, puedes proceder a implementar funciones adicionales que manejen estructuras de datos como listas enlazadas.

## 📚 Evaluación

- **Deepthought:** Un sistema automatizado revisará parte del código.
- **Peer-evaluations:** Tus compañeros evaluarán la funcionalidad y conformidad de tu proyecto.

## 📝 Entrega

Tu trabajo debe ser entregado a través de tu repositorio Git asignado. Asegúrate de que todos los archivos necesarios están presentes y que el nombre de los archivos es correcto.


