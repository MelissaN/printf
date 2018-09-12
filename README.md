<img src="https://raw.githubusercontent.com/MelissaN/printf/master/printf.gif">
## _printf()
> In this project, we recreated a mini-verison of the ```printf``` function found in
> the ```stdio.h``` library in the C programming language. This function allows
> us to print any argument given to the standard output or terminal and similar
> printing functions can be found in any programming language. This means we can
> print any combinations of strings, intergers, and other different data types.

### Synopsis
> This repository holds all the code necessary for our custom ```_printf```
> function to run. Our mini-version currently handles conversion specifiers:
> ```c```, ```s```, ```%```, ```d```, ```i```, ```b```, ```o``` and does not yet
> support field width, precision, flag characters, or length modifiers. Unique to our _printf is our ```r```
> reverse conversion and the ```R``` rot13 conversion. In essence, you can
> print any character, string, integer, or decimal number, reverse your strings, 
> transform any number to binary and octal bases, and encrypt your string with rot13 encryption. 

### Description of what each file shows:
```
man_3_printf ----------------------- custom manpage for custom _printf function
print.c ---------------------------- holds custom _printf function
holberton.h ------------------------ holds prototypes of functions spread across all files
getFunc_and_buffer_functions.c ----- holds functions to get appropriate function, and create and write buffer
strcpy.c --------------------------- holds custom-made strcpy function
strlen.c --------------------------- holds custom-made strlen function
string.c --------------------------- handles %s to print a string of characters
char.c ----------------------------- handles %c to print a single character
decimal.c -------------------------- handles %d and %i to print (d)ecimal/(i)ntegers in base 10
binary.c --------------------------- handles %b to convert numbers passed into base 2
octal.c ---------------------------- handles %o to convert numbers passed into base 8
rot13 ------------------------------ handles %R to move each character 13 alphabet letters down
```
### Environment
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### How To Install & Compile
```
(terminal)$ git clone https://github.com/MelissaN/printf.git
(terminal)$ cd printf
```
Sample main program inside print.c:
```
int main(void)
{
	_printf("%s %c%drld", "Hello", "W", 0);
	return (0);
}
====================================
(terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o print
(terminal)$ ./print
Hello W0rld
(terminal)$
```

### To Do
* The main _printf function can be separated into more modular shorter functions
* More functionality can still be added (e.g. support field width specifiers, etc)

---
### Authors
Melissa Ng [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/MelissaNg__)
Cody Paral [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/Cody_299)
