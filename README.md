# doubly_link_list_oprations

## Makefile

### Compile

To compile all programs, run following command in root directory of submission
where Makefile file is present

	make build
	
After running make build command, executable files and related to source (.c)
file can be located in their respective directories. The directories are discussed 
in the directory structure as follows:

## Directory Structure

### For solution1
For solution of 1st question directory is:
	
	cd solution1/
	
It contains two folders:
 1. 1a
 2. 1b
 
Folder **1a** contains the code for linked list functions and their testing with the user commands.
It contains 2 files a4q1a_int.c and a4q1a_char_c which contains the integer and character linked list
respectively, and two command files cmd1.txt and cmd2.txt for testing purpose.
      
Folder **1b** contains the code for linked list and function pointers with the user commands. It contains 
a4q1b.c, sorted_list.c, sorted_list.h and cmd.txt for testing purpose.

### For solution2
For solution of 2nd question directory is:

	solution2/
	
It contain two folders:
 1. 2a
 2. 2b
 
Folder **2a** contain sorce code for question 2 Recusive functions and their test and commands.

Folder **2b** contain sorce code for question 2 Greatest Common Divisor (GCD).

The tail recursive implementation means that the recursive call statement must be the last
statement of the function. The gcd function made in 2b program is also tail recursive. The
reason is that the recursive statement **return gcd(b, a%b);** is the last statement execute
by the function and after that the function is called again for the different values of a an
b as calculated in the function. Thus, the implementation of gcd is tail recursive.

### For solution3
For solution of 3rd question directory is :

	solution3/
	
It contain source code for question 3 ADT Fraction and its related functions and filter functions.

In solution3
	
 • a4q3.c contain source code for commands and test for question 3 functions and ADT Fraction.
 • a.c contain function definition of question 3 functions related to Fractions.And a.h is It’s 
 corresponding header file.
 • functions.c contain filter function with its recusive definition. It also contain map/reduce/etc  
 functions . And function.h is it’s corresponding header file.
 • sorted_list.c contain function related to Sorted List data type and its definition. sorted_list.h 
 is it’s corresponding header files.

### Run
For solution1a (Advanced linked List) runfollowing command after make build

	make run_solution1a for program 1a
	make run_solution1b for program 1b	

For Solution2a (Recursive functions of questions 2) run following command after
make build

	make run_solution2a

For Solution2b (GCD function of questions 2) run following command after make
build

	make run_solution2b


For Solution3 run following command after make build

	make run_solution3

### Clean

To clean up the directories, run command

	make clean

## Manual compilation

### Solution2a

First go to directory solution2/2a using command:

      cd solution2/2a/
     
It has four files namely: a4q2.c  cmd.txt  sorted_list.c  sorted_list.h

#### Compile
compile using command:

       gcc -Wall -DINT a4q2.c  sorted_list.c  sorted_list.h -o a4q2

This will make an executable file named a4q2

#### Run
For providing commands through file cmd.txt use following command:

      ./a4q2 cmd.txt

For providing commands through command line use following command:

      ./a4q2
      
(This will ask the commands from user and user can end giving input using ctrl+D)

     
### Commands


### Solution1a

First go to directory solution1/1a using command:

      cd solution1/1a/
     
It has two files namely: a4q1a_int.c and a4q1a_char.c

#### Compile

      gcc a4q1a_int.c -o a4q1aint

This will make an executable file named a4q1aint

      gcc a4q1a_char.c -o a4q1achar

This will make an executable file named a4q1achar

#### Run

      ./a4q1aint cmd1.txt
      ./a4q1aint
      
(This will ask the commands from user and user can end giving input using ctrl+D)

      ./a4q1achar cmd2.txt
      ./a4q1achar

(Similar as ./a4q1aint)
      
The commands available are:

       - a = append with syntax: 
            a key value for a4q1a_int.c
            a string for a4q1a_int  
       - p = push similar to a but the command will contain p instead of a
       - rem_first 
       - rem_last
       - rem_small
       - rem_large
       - empty
       - size 
       - print_all 
       - print_sort

### Solution for 1b

First go to directory solution1/1b using command:

      cd solution1/1b/
     
It has file namely: a4q1b.c
#### Compile

      gcc a4q1b.c sorted_list.c sorted_list.h -o a4q1b

This will make an executable file named a4q1b

#### Run

      ./a4q1b cmd.txt
      ./a4q1b
      
(This will ask the commands from user and user can end giving input using ctrl+D)
     
The commands available are:

       - a|n = append with syntax: 
            a|n key value 
       - p|n = push similar to a but the command will contain p instead of a
       - rem_first|n 
       - rem_last|n
       - rem_small|n
       - rem_large|n
       - empty|n
       - size |n
       - print_all|n 
       - print_sort|n
       - sum|n
       - square|n
       - diff|n:m order
       - sum_sq_d|n:m order

       order specifies: INSERTED_ORDER or SORTED_ORDER
       n is the index of array of sorted list pointers

#### For 2a

      All the commands from q1a along with some other mentioned below:
      - count_up n: from 0 to 2n by 2
      - count_down n: from n to 0 by 1
      - nth order: print the nth node according to the order (INSERTED OR SORTED)
      - remove_nth order: remove the nth node according to the order(INSERTED OR SORTED)
      

### Solution2b

First go to directory solution2/2b using command:

      cd solution2/2b/
     
It has a files for gcd program having name:a4q2b.c

#### Compile
compile using command:

      gcc -Wall -O3 a4q2b.c -o gcd

This will make an executable file named **gcd**

#### Run
To run gcd program  use following command:

      ./gcd
      
(This will ask the input from user inractively)
     
### Commands
       
### For 2b

     For 2b no specific command. Only the task is that the program will ask the user to enter 2 numbers
     and will find the gcd (greatest common divisor)
     

### Solution2a

First go to directory solution3 using command:

      cd solution3/
     
It has 8 files namely: a4q3.c  a.c  a.h  cmd.txt  functions.c  functions.h  sorted_list.c  sorted_list.h

#### Compile
compile using command:

       gcc -Wall -DFRACT a4q3.c  a.c  a.h functions.c  functions.h  sorted_list.c  sorted_list.h -o a4q3

This will make an executable file named a4q3

#### Run
For providing commands through file cmd.txt use following command:

      ./a4q3 cmd.txt

For providing commands through command line use following command:

      ./a4q3
      
(This will ask the commands from user and user can end giving input using ctrl+D)

     
### Commands
      
### For 3a

     All the commands from q1a are available but with some modifications in push and append:
     - p key value becomes p n/d
     - a key value becomes a n/d
     Rest commands from q1a are same.
     
     The other available commands are:
     - print_all
     - sum
     - fract 
     - whole_num
     - rem_mixed
     
     
     all along with the mode of output as SIMPLE or MIXED.
      
      eg. sum SIMPLE

	
