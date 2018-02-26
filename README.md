## _printf()
> In this project, we recreated a mini-verison of ```printf``` function found in
> the ```stdio.h``` library in the C programming language. This repository holds
> all the code necessary for our custom ```_printf``` function to run. Our
> mini-version currently handles conversion specifiers: ```c```, ```s```,
> ```%```, ```d```, and ```i``` and does not yet support field width, precision,
> flag characters, or length modifiers.

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
man_3_printf --------- custom manpage for custom _printf function
print.c -------------- holds custom _printf function
holberton.h ---------- holds prototypes of functions spread across all files
string.c ------------- handles %s
char.c --------------- handles %c
decimal.c ------------ handles %d and %i

```
---
### Authors
Melissa Ng [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/MelissaNg__)
Cody Paral [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/Cody_299)

### License
 [![M](https://www.holbertonschool.com/holberton-logo-simple-200s.png)](https://www.holbertonschool.com)
