<div align="center">

<img src="https://apply.holbertonschool.com/holberton-logo.png" />
<h1> _printf </h1>
  
</div>

<br>
  
## Index
* [Requirements](#requirements)
* [Tasks](#tasks)
* [How it work](#how-it-work)
* [Resources](#resources)
* [Credits](#credits)

## Requirements
<details>
<summary>General</summary>

* Allowed editors: vi, vim, emacs

* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

* All your files should end with a new line

* A README.md file, at the root of the folder of the project is mandatory

* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

* You are not allowed to use global variables

* No more than 5 functions per file

* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we
* won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

* The prototypes of all your functions should be included in your header file called main.h

* Don’t forget to push your header file

* All your header files should be include guarded

* Note that we will not provide the _putchar function for this project
</details>

<details>
<summary>Compilation</summary>

* Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
* Our main files will include your main header file (main.h): #include main.h
* You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.

</details>

<details>
<summary>Github</summary>

* There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.
* The name of the repository: holbertonschool-printf

</details>

## Tasks

<details>
<summary>Task 0</summary>

<h3>Write a function that produces output according to a format.</h3>

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings).
* write output to stdout, the standard output stream.
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  - c
  - s
  - %

</details>

<details>
<summary>Task 1</summary>

<h3>Handle the following conversion specifiers:</h3>
  
  - d
  - i
  
</details>

<details>
<summary>Task 2</summary>

<h3>Create a man page for your function.</h3>

</details>

## How it work

### Prototype

```
int _printf(const char *format, ...);
```
### Usage

The function works by receiving an argument which is related within the function to a specific format. Depending on which one we use the _printf will perform different purposes.

<div align="center">

| **Format**|      **Output**     
|:---------:|:-------------------:
|     %c    | Prints a character  
|     %s    | Prints a string     
|     %%    | Prints a percentage 
|     %d    | Prints a decimal integer    
|     %i    | Prints a integer     

</div>
<details>
<summary>Examples</summary>

### Character
  Indicate a Char format
```C
_printf("Character:[%c]\n", 'H');
Character:[H]
```

### String
  Indicate a String format
```C
_printf("String:[%s]\n", "I am a string !");
String:[I am a string !]
```

### %%
  Print just one %
```C
_printf(Percent:[%%]\n");
Percent:[%]
```

### Decimal Integer
  Indicate a Decimal Integer format
```C
_printf("I have %i cats.\n", 2);
I have 2 cats
```

### Integer
  Indicate a Integer format
```C
_printf("The temperature today is %i degrees Celsius.", 20);
  The temperature today is 20 degrees Celsius.
```

</details>

## Resources
* <a href="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230402%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230402T155050Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=01c63766891dd8806fe775a787a4a5ec6a3f31e23cf3b9b2b14a7c32313f85aa">[Printf Secrets]</a>
* <a href="https://intranet.hbtn.io/concepts/893">[Group Projects]</a>
* <a href="https://intranet.hbtn.io/concepts/881">[Approaching a Project]</a>
* <a href="https://intranet.hbtn.io/concepts/895">[Flowcharts]</a>

<div align="center">
  
## Credits
 
&ensp;[<img src="https://img.shields.io/badge/MateoOlv-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/MateoOlv)
&ensp;[<img src="https://img.shields.io/badge/Diego29012-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/Diego29012)

</div>
