___

# AirBnB Clone Project

`0x00.AirBnb_Clone` project from Holberton School, it's a project to implement the console which will be the command interpreter. The project has been done in python language. The present project is the first part of the AirBnB clone. The command interpreter will be manipulate data without a visual interface, like in a Shell.

![N|Solid](https://pbs.twimg.com/media/D-WTgbVWkAAUd9W.png)

# The console

Will do the next task, just as it is propused: **create the data model, manage the data: create, update, destroy, read objects via the console (command interpreter), finally, store and persist objects to a file JSON file**
___
### Console Description
> It is to manipulate a storage system. This storage engine will give an
> abstraction between an “object” and “How they are stored and persisted”. From the > console code (command interpreter) and from the front-end.
> This abstraction will also allow you to change the type of storage easily without > updating all of your codebase. The console is a tool to validate the storage
> engine
___

### How to compile
> Use the next code to compile the shell in your command prompt:
 ```sh
 gcc -g -Wall -Werror -Wextra -pedantic *.c -o hsh --debug
 ```
 - Where the gcc is the compiler used to compile the program.
 - The `-g` and `--debug` flag is for show all the descriptions in debug format.
 - The  flags `-Wall -Werror -Wextra -pedantic` show all warnings treat as an error.
 - The "`*.c`" means that all the files with .c extention will be compiled.
 - The `-o` flag is used for the output file direction.
 
 ___
 
### How to use

 - You need to include the shell.h local library or header file.
 - After the compilation process use the excecutable command: `./hsh` and click on
 enter "`\n`".
 - If you want to verify the free() process in the shell I recommend to use valgrind and the executable

___

### In the present shell is posible to use common commands like:

| command | Meaning |
| --- | --- |
| `ls` | List the file in PATH (It's possible to use the flags) |
| `pwd` | Print the current directory |
| `env` | Print the environment |
| `echo` | Print the next argument after write the echo command |
| `exit` | Close the shell in a correct end process |
___
#### AUTHORS
| Name | Cohort | Social media |
| ---| --- | --- |
| **Paula Gutierrez** | Cohort 8 - Bog | [![N\|Solid](https://www.allininteractive.com/wp-content/uploads/2015/04/twitter.png)](https://twitter.com/AndZapata1) |
| **Ricardo Gutierrez** | Cohort 8 - Bog | [![N\|Solid](https://www.allininteractive.com/wp-content/uploads/2015/04/twitter.png)](https://twitter.com/kyeeh) |

________
