*This project has been created as part of the 42 curriculum by liaktas.*

# ft_printf

## Description
The goal of this project is to recode the famous `printf()` function from the standard C library (`libc`). Through this project, we learn about **variadic functions** in C, which allow functions to accept a variable number of arguments using the `<stdarg.h>` macros The function is named `ft_printf` and mimics the prototype and core behavior of the original function:

```c
int ft_printf(const char *, ...);
```

### Supported Conversions
The mandatory implementation handles the following conversion specifiers cleanly:
* `%c` : Prints a single character.
* `%s` : Prints a string (as defined by the common C convention).
* `%p` : Prints a `void *` pointer argument in hexadecimal format.
* `%d` : Prints a decimal (base 10) number.
* `%i` : Prints an integer in base 10.
* `%u` : Prints an unsigned decimal (base 10) number.
* `%x` : Prints a number in hexadecimal (base 16) lowercase format.
* `%X` : Prints a number in hexadecimal (base 16) uppercase format.
* `%%` : Prints a percent sign.

## Algorithm and Data Structure
The project relies on a stream-parsing algorithm that sequentially scans the input string character by character:
1. **Normal Characters:** Whenever a standard character is encountered, it is directly printed to the standard output using the `write()` system call, incrementing the total character counter.
2. **Format Specifiers:** When a `%` symbol is found, the parser transitions to an evaluation state to read the subsequent conversion specifier character.
3. **Variadic Argument Extraction:** Using the `va_start`, `va_arg`, and `va_end` macros, the corresponding type is retrieved from the argument list and converted to its character representation (using base conversion algorithms for `%x`, `%p`, and `%u`).

## Instructions
### Compilation
The library compiles into a file named `libftprintf.a` at the root of the repository. You must use the `ar` command.

Compile the library using the provided `Makefile` rules:

```bash
make
```

### Makefile Rules
* `make` or `make all` : Compiles the source files and generates `libftprintf.a`.
* `make clean` : Removes all object files (`.o`).
* `make fclean` : Removes all object files and the compiled static library (`libftprintf.a`).
* `make re` : Forces a complete recompilation of the project.

### Usage
Include the header file `ft_printf.h` in your source code:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! The answer is %d.\n", "World", 42);
    return (0);
}
```

Compile your application along with the static library:

```bash
cc main.c -L. -lftprintf -o program
```

## References
* [C Variadic Functions Documentation](https://cppreference.com) — Reference guide for handling variable arguments with `<stdarg.h>`.
* [The Linux man-pages for printf(3)](https://man7.org) — Comprehensive official manual for expected behavior and formatting specifications.
* AI was exclusively utilized to structure and format this Markdown README file, fix layout constraints, and ensure clean structural explanations for the algorithm description.