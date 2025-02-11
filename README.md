<div align="center">
  <a href="https://profile.intra.42.fr/users/dagredan" title="My score"><img src="https://img.shields.io/badge/125%2F100-5CB85C?style=for-the-badge"></a>
  <a href="https://profile.intra.42.fr/users/dagredan" title="See my student profile"><img src="https://img.shields.io/badge/42_barcelona-222?style=for-the-badge"></a>
  <a href="https://www.linkedin.com/in/david-agredano" title="See my LinkedIn profile"><img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge"></a>
</div>

<h1 align="center">Libft</h1>

![libft-portada](https://github.com/user-attachments/assets/2e198964-d7f9-432a-ba09-190a2cb2bda1)

**Libft** is a custom C library that reimplements essential standard functions from scratch. The goal is to understand how these functions work internally and build a personal toolkit for future projects.

This library includes functions for handling strings, memory management, type conversions, linked lists, and more.

## Project requirements

- The project must be written in accordance with [The Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf), a programming standard that defines a set of rules to follow when writing code. Among others:
    - The use of `for`, `do…while`, `switch`, `case`, `goto` and ternary operator is forbidden.
    - Functions should be short (25 lines) and just do one thing.
    - Maximum 4 parameters per function.
    - Only 5 functions per file.
    - Only one instruction or control structure per line.
    - Lines shouldn’t be longer than 80 columns wide.
    - Declaration and initialization cannot be on the same line.
    - All identifiers (functions, types, variables, etc.) names should be explicit and make sense.
- Functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.
- All heap allocated memory space must be properly freed when necessary. No leaks are tolerated.
- A `Makefile` which will compile your source files to the required output must be submitted.
- All files should be placed at the root of the repository.
- Every `.c` files must be compiled with the flags `-Wall -Wextra -Werror`.
- The command `ar` must be used to create the library. Using the `libtool` command is forbidden.
- The `libft.a` has to be created at the root of the repository.
- Only the `write()`, `malloc()`, and `free()` standard C functions are allowed, no other standard library functions can be used.

## Included functions

### Character classification

- [`ft_isalpha`](https://github.com/davidagredano/libft/blob/master/ft_isalpha.c?ts=4) - Checks if a character is alphabetic (a-z or A-Z).
- [`ft_isdigit`](https://github.com/davidagredano/libft/blob/master/ft_isdigit.c?ts=4) - Checks if a character is a decimal digit (0-9).
- [`ft_isalnum`](https://github.com/davidagredano/libft/blob/master/ft_isalnum.c?ts=4) - Checks if a character is alphanumeric (a-z, A-Z, 0-9).
- [`ft_isascii`](https://github.com/davidagredano/libft/blob/master/ft_isascii.c?ts=4) - Checks if a character is within ASCII range (0-127).
- [`ft_isprint`](https://github.com/davidagredano/libft/blob/master/ft_isprint.c?ts=4) - Checks if a character is printable (32-126).
- [`ft_toupper`](https://github.com/davidagredano/libft/blob/master/ft_toupper.c?ts=4) - Converts a lowercase letter to uppercase.
- [`ft_tolower`](https://github.com/davidagredano/libft/blob/master/ft_tolower.c?ts=4) - Converts an uppercase letter to lowercase.

### Memory manipulation

- [`ft_memset`](https://github.com/davidagredano/libft/blob/master/ft_memset.c?ts=4) - Fills a block of memory with a specified byte value.
- [`ft_bzero`](https://github.com/davidagredano/libft/blob/master/ft_bzero.c?ts=4) - Fills a block of memory with zeros.
- [`ft_memcpy`](https://github.com/davidagredano/libft/blob/master/ft_memcpy.c?ts=4) - Copies bytes from source to destination memory area.
- [`ft_memmove`](https://github.com/davidagredano/libft/blob/master/ft_memmove.c?ts=4) - Copies bytes from source to destination.
- [`ft_memchr`](https://github.com/davidagredano/libft/blob/master/ft_memchr.c?ts=4) - Locates the first occurrence of a byte in a memory area.
- [`ft_memcmp`](https://github.com/davidagredano/libft/blob/master/ft_memcmp.c?ts=4) - Compares two memory areas byte by byte.
- [`ft_calloc`](https://github.com/davidagredano/libft/blob/master/ft_calloc.c?ts=4) - Allocates memory and initializes all bytes to zero.

### String manipulation

- [`ft_strlen`](https://github.com/davidagredano/libft/blob/master/ft_strlen.c?ts=4) - Calculates the length of a string.
- [`ft_strnlen`](https://github.com/davidagredano/libft/blob/master/ft_strnlen.c?ts=4) - Calculates the length of a string without exceeding the specified *maxlen*.
- [`ft_strlcpy`](https://github.com/davidagredano/libft/blob/master/ft_strlcpy.c?ts=4) - Copies up to size-1 characters from src to dest, NUL-terminating the result.
- [`ft_strlcat`](https://github.com/davidagredano/libft/blob/master/ft_strlcat.c?ts=4) - Appends src to the end of dest, ensuring NUL-termination within size bytes.
- [`ft_strchr`](https://github.com/davidagredano/libft/blob/master/ft_strchr.c?ts=4) - Finds the first occurrence of a character in a string.
- [`ft_strrchr`](https://github.com/davidagredano/libft/blob/master/ft_strrchr.c?ts=4) - Finds the last occurrence of a character in a string.
- [`ft_strncmp`](https://github.com/davidagredano/libft/blob/master/ft_strncmp.c?ts=4) - Compares up to n characters of two strings.
- [`ft_strnstr`](https://github.com/davidagredano/libft/blob/master/ft_strnstr.c?ts=4) - Searches for a substring in a string up to *len* characters.
- [`ft_strdup`](https://github.com/davidagredano/libft/blob/master/ft_strdup.c?ts=4) - Duplicates a string by allocating enough memory and copying the content.
- [`ft_substr`](https://github.com/davidagredano/libft/blob/master/ft_substr.c?ts=4) - Extracts a substring from a string starting at index *start* and of length *len*.
- [`ft_strjoin`](https://github.com/davidagredano/libft/blob/master/ft_strjoin.c?ts=4) - Concatenates two strings into a new string.
- [`ft_strtrim`](https://github.com/davidagredano/libft/blob/master/ft_strtrim.c?ts=4) - Removes all characters from the beginning and end of a string
- [`ft_split`](https://github.com/davidagredano/libft/blob/master/ft_split.c?ts=4) - Splits a string into an array of substrings, using a delimiter character.
- [`ft_strmapi`](https://github.com/davidagredano/libft/blob/master/ft_strmapi.c?ts=4) - Creates a new string with by applying a function to the original string.
- [`ft_striteri`](https://github.com/davidagredano/libft/blob/master/ft_striteri.c?ts=4) - Applies a function to each character of a string.

### Type conversion

- [`ft_atoi`](https://github.com/davidagredano/libft/blob/master/ft_atoi.c?ts=4) - Converts a string to an integer.
- [`ft_itoa`](https://github.com/davidagredano/libft/blob/master/ft_itoa.c?ts=4) - Converts an integer to a string representation.
- [`ft_uitoa`](https://github.com/davidagredano/libft/blob/master/ft_uitoa.c?ts=4) - Converts an unsigned integer to a lowercase string representation.
- [`ft_uitoa_caps`](https://github.com/davidagredano/libft/blob/master/ft_uitoa_caps.c?ts=4) - Converts an unsigned integer to an uppercase string representation.
- [`ft_ultoa`](https://github.com/davidagredano/libft/blob/master/ft_ultoa.c?ts=4) - Converts an unsigned long to a lowercase string representation.

### Print functions

- [`ft_putchar`](https://github.com/davidagredano/libft/blob/master/ft_putchar.c?ts=4) - Writes a single character to the standard output.
- [`ft_putchar_fd`](https://github.com/davidagredano/libft/blob/master/ft_putchar_fd.c?ts=4) - Writes a single character to the specified file descriptor.
- [`ft_putstr`](https://github.com/davidagredano/libft/blob/master/ft_putstr.c?ts=4) - Writes a string to the standard output
- [`ft_putstr_fd`](https://github.com/davidagredano/libft/blob/master/ft_putstr_fd.c?ts=4) - Writes a string to the specified file descriptor.
- [`ft_putendl_fd`](https://github.com/davidagredano/libft/blob/master/ft_putendl_fd.c?ts=4) - Writes a string to the specified file descriptor, followed by a newline.
- [`ft_putnbr_fd`](https://github.com/davidagredano/libft/blob/master/ft_putnbr_fd.c?ts=4) - Writes an integer to the specified file descriptor.

### Linked list manipulation

- [`ft_lstnew`](https://github.com/davidagredano/libft/blob/master/ft_lstnew.c?ts=4) - Creates a new list element with the given *content*.
- [`ft_lstadd_front`](https://github.com/davidagredano/libft/blob/master/ft_lstadd_front.c?ts=4) - Adds a new element at the beginning of a list.
- [`ft_lstsize`](https://github.com/davidagredano/libft/blob/master/ft_lstsize.c?ts=4) - Counts the number of element in a list.
- [`ft_lstlast`](https://github.com/davidagredano/libft/blob/master/ft_lstlast.c?ts=4) - Returns the last element of the list.
- [`ft_lstadd_back`](https://github.com/davidagredano/libft/blob/master/ft_lstadd_back.c?ts=4) - Adds a new element at the end of a list.
- [`ft_lstdelone`](https://github.com/davidagredano/libft/blob/master/ft_lstdelone.c?ts=4) - Deletes a single element from a list, freeing its memory.
- [`ft_lstclear`](https://github.com/davidagredano/libft/blob/master/ft_lstclear.c?ts=4) -  Deletes and frees the list element pointed to, as well as all following elements.
- [`ft_lstiter`](https://github.com/davidagredano/libft/blob/master/ft_lstiter.c?ts=4) - Applies the given function to the content of each element.
- [`ft_lstmap`](https://github.com/davidagredano/libft/blob/master/ft_lstmap.c?ts=4) - Creates a new list by applying a function to the content of each element.

<div align="right">
    <a href="#libft"><b>Back to top ↥</b></a>
</div>

## Compilation instructions

1. Download or **clone this repository**.
    
    ```bash
    git clone https://github.com/davidagredano/libft.git
    ```
    
2. **Move into the project's directory**.
    
    ```bash
    cd libft
    ```
    
3. **Compile the library**. The binary `libft.a` will be created at the root of the directory.
    
    ```bash
    make
    ```
    

### Other useful commands

| Command | Description |
| --- | --- |
| `make` | Compile the library. |
| `make clean` | Remove the objects files. |
| `make fclean` | Remove the objects files and the library. |
| `make re` | Recompile the library. |

## Library usage

To use the library functions, **include its header to you source files**:

```c
#include "path/to/libft.h"
```

and **add the required flags when compiling** your code:

```bash
gcc [option...] infile... -L<path/to/libft/dir> -lft
```

- `-l<library>`
    
    The linker searches for the library named *library*, which is actually a file named `lib<library>.a`. For example, for our **Libft** we should use `-lft` since our library is called `libft.a`. [GCC manual](https://gcc.gnu.org/onlinedocs/gcc-2.95.3/gcc_2.html#SEC13)
    
- `-L<dir>`
    
    Add directory *dir* to the list of directories to be searched for `-l`. [GCC manual](https://gcc.gnu.org/onlinedocs/gcc-2.95.3/gcc_2.html#SEC14)
    

### Usage example

**Directory structure:**

```
├── libft/
│   ├── Makefile
│   ├── ft_atoi.c
│   ├── ...
│   ├── ft_ultoa.c
│   ├── libft.a
│   └── libft.h
└── example_project/
    └── main.c
```

`/example_project/main.c` **content:**

```c
#include "../libft/libft.h"

int main() {
    char *str = "Hello, Libft!";
    ft_putendl_fd(str, 1);
}
```

**Compilation including the library:**

```bash
cd example_project
gcc -o usage_example main.c -L../libft -lft 
```

**Binary execution:**

```bash
$> ./usage_example
Hello, Libft!
$>
```

---

<div align="center">
  If you like this project, a ⭐️ would be greatly appreciated.<br>Thanks for your support!
</div>

---

## Contributing guidelines

Contributions are always welcome! If you find a bug or have an idea to improve this project, feel free to:

- **Open an issue** to report a problem or suggest an enhancement.
- **Submit a pull request** if you’ve already implemented a fix or improvement—I’d love to review it!

### **How to Contribute**

- **Fork the repository.**
- **Create a new branch** (`git checkout -b feature/YourFeature`).
- **Make your changes** and commit (`git commit -m "Add YourFeature"`).
- **Push to your branch** (`git push origin feature/YourFeature`).
- **Open a pull request** and describe your changes.

## **Contact me**

Hello! 👋 I'm David, the creator of this project. If you have any questions, suggestions, or just want to chat about software development or anything else, feel free to reach out to me.

My email is [davidagredano@gmail.com](mailto:davidagredano@gmail.com).

Looking forward to hearing from you!

<div align="right">
    <a href="#libft"><b>Back to top ↥</b></a>
</div>
