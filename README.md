*This project has been created as part of the 42 curriculum by azdursun.*

# Libft - Your Very First Own C Library

## Description
Libft is the first individual project in the 42 curriculum. The goal of this project is to create a custom C library (`libft.a`) comprising reimplementations of standard C library functions (`libc`), as well as additional utility functions for memory management, string manipulation, file descriptor output, and linked list data structure operations.

This library serves as a foundational toolkit that will be reused and expanded across future C programming assignments at 42.

---

## Instructions

### Compilation and Usage
The project includes a `Makefile` configured with `-Wall -Wextra -Werror` flags using `cc` and `ar`.

- **Compile the library:**
  ```bash
  make
  ```
- **Clean object files (`.o`):**
  ```bash
  make clean
  ```
- **Clean object files and library archive (`libft.a`):**
  ```bash
  make fclean
  ```
- **Recompile library from scratch:**
  ```bash
  make re
  ```

### Linking with a C project
To use `libft.a` in your own program:
```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```
Include `libft.h` in your source files:
```c
#include "libft.h"
```

---

## Detailed Description of the Library

### Part 1 - Libc Reimplementations
- **Character Checks & Conversion:**
  - `ft_isalpha`: Checks for an alphabetic character.
  - `ft_isdigit`: Checks for a digit (0 through 9).
  - `ft_isalnum`: Checks for an alphanumeric character.
  - `ft_isascii`: Checks whether character fits in ASCII table.
  - `ft_isprint`: Checks for any printable character.
  - `ft_toupper`: Converts character to uppercase.
  - `ft_tolower`: Converts character to lowercase.
- **String Operations:**
  - `ft_strlen`: Calculates the length of a string.
  - `ft_strchr`: Locates first occurrence of character in string.
  - `ft_strrchr`: Locates last occurrence of character in string.
  - `ft_strncmp`: Compares two strings up to `n` characters.
  - `ft_strlcpy`: Size-bounded string copy.
  - `ft_strlcat`: Size-bounded string concatenation.
  - `ft_strnstr`: Locates a substring in a string of limited length.
  - `ft_atoi`: Converts a string representation of an integer to `int`.
- **Memory Operations:**
  - `ft_memset`: Fills memory with a constant byte.
  - `ft_bzero`: Erases data in the memory by writing zeroes.
  - `ft_memcpy`: Copies memory area.
  - `ft_memmove`: Copies memory area safely handling overlapping regions.
  - `ft_memchr`: Scans memory for a character.
  - `ft_memcmp`: Compares memory areas.
  - `ft_calloc`: Allocates and zeroes out heap memory.
  - `ft_strdup`: Duplicates a string using dynamic allocation.

### Part 2 - Additional Functions
- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings into a newly allocated string.
- `ft_strtrim`: Trims characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings using a delimiter.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Creates a new string by applying a function to each character with its index.
- `ft_striteri`: Applies a function to each character of a string in place.
- `ft_putchar_fd`: Outputs a character to a given file descriptor.
- `ft_putstr_fd`: Outputs a string to a given file descriptor.
- `ft_putendl_fd`: Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Outputs an integer to a given file descriptor.

### Part 3 - Linked List Functions
Using the `t_list` structure:
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```
- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node at the beginning of the list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Returns the last node of the list.
- `ft_lstadd_back`: Adds a node at the end of the list.
- `ft_lstdelone`: Deletes and frees a single node using a custom deleter.
- `ft_lstclear`: Deletes and frees an entire list of nodes.
- `ft_lstiter`: Applies a function to the content of each node.
- `ft_lstmap`: Maps a function over a list to create a new list.

---

## Resources

### References
- *The C Programming Language* (2nd Edition) - Brian W. Kernighan, Dennis M. Ritchie
- GNU C Library Manual & BSD Manual Pages (`man 3 strlen`, `man 3 memcpy`, etc.)
- 42 School Libft Subject Documentation (Version 19.3)

### AI Usage Description
- **Task Identification & Code Review:** AI was used as an interactive pair-programming tool to inspect existing code, identify subtle bugs (uninitialized variables, edge cases with null terminators and pointers, overlap handling in `memmove`, mutual recursion in character conversions), and verify conformance to 42 Libft Version 19.3 subject requirements.
- **Documentation & Formatting:** AI aided in generating structured documentation, test harnesses, and ensuring adherence to the 42 Norm standards.
