# Libft

## Overview  
**Libft** is the very first project of the 42 common core.  
It consists of a **static C library** that reimplements some part of the standard C library.  
The main goal of this project is to help students understand how those standard functions work internally and to develop good habits for memory management and clean code.  

---

## Purpose  
Beyond being an exercise in reimplementation, Libft also serves as the foundation for many future projects in the curriculum.  
It can be expanded over time with new functions whenever a later project requires tools that were not originally part of the subject.  

This library is therefore **not a closed project**, but a personal toolbox that evolves along the learning path.  
Only generic and reusable functions are included, meaning anything too specific or used only once does not belong here.

---

## Structure  
The project is organized as follows:
```
libft/
├── Makefile
├── *.c -- Core functions (string, memory, list, etc.)
├── libft.h -- Main header file
├── ft_printf/ -- Submodule: custom printf
└── get_next_line/ -- Submodule: file reading line by line
```

- The **core functions** reproduce behaviors from `<string.h>`, `<stdlib.h>`, and `<ctype.h>`, among others.  
- The **`ft_printf/`** folder contains a reimplementation of the `printf()` function, initially done as a separate project but later integrated here for convenience.  
- The **`get_next_line/`** folder provides a function capable of reading text files line by line — another project from the 42 cursus, also included for convenience.  

Those two submodules (`ft_printf` and `get_next_line`) cannot be compiled or tested directly from this repository, as they require multiple files and do not include a `main()` function.  
They are instead meant to be tested in their own dedicated repositories.

---

## Compilation  
The Makefile compiles all functions into a static library named **`libft.a`**.

Those are the basic rules that 42 subject asked to put in makefile.

To build it:
```bash
make
```
To clean object files:
```bash
make clean
```
To remove everything including the static library
```bash
make fclean
```
To clean and rebuild 
```bash
make re
```
