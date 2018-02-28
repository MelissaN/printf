## _printf()
> In this project, we recreated a mini-verison of ```printf``` function found in
> the ```stdio.h``` library in the C programming language. This repository holds
> all the code necessary for our custom ```_printf``` function to run. Our
> mini-version currently handles conversion specifiers: ```c```, ```s```,
> ```%```, ```d```, ```i```, ```b```, ```o``` and does not yet support field width, precision,
> flag characters, or length modifiers. Unique to our _printf is our ```r```
> reverse conversion and the ```R``` rot13 conversion. In essence, you can
> print any character, string, integer, or decimal number, reverse your strings, 
> transform any number to binary and octal bases, and encrypt your string with rot13 encryption. 

### Requirements
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
* All .c files will be compiled with
```
gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

### Synopsis
For a challenge, the only functions we're allowed to use from any library,
if we chose, are the following functions and macros:
```
write
malloc
free
va_start
va_end
va_copy
va_arg
```

### Description of what each file shows:
```
man_3_printf ----------------------- custom manpage for custom _printf function
print.c ---------------------------- holds custom _printf function
holberton.h ------------------------ holds prototypes of functions spread across all files
getFunc_and_buffer_functions.c ----- holds functions to get appropriate function, and create and write buffer
strcpy.c --------------------------- holds custom-made strcpy function
strlen.c --------------------------- holds custom-made strlen function
string.c --------------------------- handles %s
char.c ----------------------------- handles %c
decimal.c -------------------------- handles %d and %i
binary.c --------------------------- handles %b to convert numbers passed into binary
rot13 ------------------------------ handles %R to convert strings to rot13 code
```
---
### Authors
Melissa Ng [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/MelissaNg__)
Cody Paral [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/Cody_299)

### License
 [![M](https://www.holbertonschool.com/holberton-logo-simple-200s.png)](https://www.holbertonschool.com)
