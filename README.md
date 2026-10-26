*This project has been created as part of the 42 curriculum by fsewad.*

# Libft

## Description
Libft is a C library that reimplements useful standard C library functions and introduces practice with strings, memory, linked lists, and pointers.

## Important Functions

### Character Checks and Conversion
- `ft_isalpha(c)` — checks whether `c` is a letter.
- `ft_isdigit(c)` — checks whether `c` is a digit.
- `ft_isalnum(c)` — checks whether `c` is a letter or digit.
- `ft_isascii(c)` — checks whether `c` is in the ASCII range.
- `ft_isprint(c)` — checks whether `c` is printable.
- `ft_toupper(c)` / `ft_tolower(c)` — converts letter case.

### Strings
- `ft_strlen(s)` — returns the string length.
- `ft_strchr(s, c)` / `ft_strrchr(s, c)` — finds a character.
- `ft_strncmp(s1, s2, n)` — compares up to `n` characters.
- `ft_strlcpy(dst, src, size)` / `ft_strlcat(dst, src, size)` — safely copy or append strings when used with valid buffer sizes.
- `ft_strnstr(big, little, len)` — searches for a substring within a limit.
- `ft_substr(s, start, len)` — creates a substring.
- `ft_strjoin(s1, s2)` — joins two strings into a new allocation.
- `ft_strtrim(s1, set)` — removes characters from the start and end.
- `ft_split(s, c)` — splits a string using a delimiter.
- `ft_itoa(n)` — converts an integer to a string.
- `ft_strmapi(s, f)` / `ft_striteri(s, f)` — apply a function to string characters.

### Memory
- `ft_memset(b, c, len)` — fills memory with a byte.
- `ft_bzero(s, n)` — sets bytes to zero.
- `ft_memcpy(dst, src, n)` — copies memory regions that do not overlap.
- `ft_memmove(dst, src, len)` — copies memory safely when regions may overlap.
- `ft_memchr(s, c, n)` — searches memory for a byte.
- `ft_memcmp(s1, s2, n)` — compares memory.
- `ft_calloc(count, size)` — allocates zero-initialized memory.
- `ft_strdup(s)` — allocates and copies a string.

### Other Useful Functions
- `ft_atoi(s)` — converts a numeric string to an integer.
- `ft_putchar_fd(c, fd)` — writes a character to a file descriptor.
- `ft_putstr_fd(s, fd)` — writes a string.
- `ft_putendl_fd(s, fd)` — writes a string followed by a newline.
- `ft_putnbr_fd(n, fd)` — writes an integer.
- `t_list` functions (if implemented) — create, add, delete, iterate over, and count linked-list nodes.

## Instructions

Run these commands in the project directory, where the `Makefile` is located.

```bash
make
```
Builds the mandatory functions into `libft.a`.

make clean
```
Removes object files (`.o`).

```bash
make fclean
```
Removes object files and the compiled library (`libft.a`).

```bash
make re
```
Runs a full rebuild, usually equivalent to `fclean` followed by `make`.

### Using Libft in a C Project

Compile your source file with the library, for example:

```bash
cc main.c -o program
./program
```

Make sure `main.c` includes the appropriate header (usually `#include "libft.h"`) and that `libft.a` has been built. The exact commands may vary with your project setup.

## Makefile Quick Guide

- `NAME` — usually the output library name, such as `libft.a`.
- `CC` — compiler, commonly `cc`.
- `CFLAGS` — compiler options, often `-Wall -Wextra -Werror`.
- `SRC` / `SRCS` — source files to compile.
- `OBJ` / `OBJS` — object files generated from source files.
- `all` — default build target.
- `clean`, `fclean`, `re`

## Resources

- `man` pages on Linux/macOS, for example `man strlen`, `man memcpy`, and `man make`.
- C reference: https://en.cppreference.com/w/c
- GNU Make manual: https://www.gnu.org/software/make/manual/

### AI Usage
AI was used as a learning aid to summarize the purpose of common Libft functions, explain common Makefile targets, and help organize this README. Function behavior and project-specific requirements should be checked against the 42 subject and the actual source code.
