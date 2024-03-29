Character set

A character set is a set of alphabets, letters and some special characters that are valid in C language.

Alphabets
	Uppercase: A B C ................................. X Y Z
	Lowercase: a b c ...................................... x y z
Digits
	0 1 2 3 4 5 6 7 8 9
Special Characters
 	,	<	>	.	_
(	)	;	$	:
%	[	]	#	?
'	&	{	}	"
^	!	*	/	|
-	\	~	+

White space Characters
Blank space, newline, horizontal tab, carriage return and form feed.


C Keywords
Keywords are predefined, reserved words used in programming that have special meanings to the compiler. Keywords are part of the syntax and they cannot be used as an identifier.

As C is a case sensitive language, all keywords must be written in lowercase.

C Identifiers
	Identifier refers to name given to entities such as variables, functions, structures etc.

	Identifiers must be unique. They are created to give a unique name to an entity to identify it during the execution of the program.
	Also remember, identifier names must be different from keywords. You cannot use int as an identifier because int is a keyword.

Rules for naming identifiers
	A valid identifier can have letters (both uppercase and lowercase letters), digits and underscores.

	The first letter of an identifier should be either a letter or an underscore.

	You cannot use keywords like int, while etc. as identifiers.

	There is no rule on how long an identifier can be. However, you may run into problems in some compilers if the identifier is longer than 31 characters.

C Variables, Constants and Literals
Variables
In programming, a variable is a container (storage area) to hold data.

To indicate the storage area, each variable should be given a unique name (identifier). Variable names are just the symbolic representation of a memory location.

The value of a variable can be changed, hence the name variable.

char ch = 'a';
// some code
ch = 'l';

Rules for naming a variable
	A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.

The first letter of a variable should be either a letter or an underscore.

There is no rule on how long a variable name (identifier) can be. However, you may run into problems in some compilers if the variable name is longer than 31 characters.

	Note: You should always try to give meaningful names to variables. For example: firstName is a better variable name than fn.


C is a strongly typed language. This means that the variable type cannot be changed once it is declared.

int number = 5;      // integer variable
number = 5.5;        // error
double number;       // error

Literals
Literals are data used for representing fixed values. They can be used directly in the code. For example: 1, 2.5, 'c' etc.

1. Integers
An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming:

decimal (base 10)
octal (base 8)
hexadecimal (base 16)
For example:

Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
In C programming, octal starts with a 0, and hexadecimal starts with a 0x.

Floating-point Literals
A floating-point literal is a numeric literal that has either a fractional form or an exponent form. For example:

-2.0
0.0000234
-0.22E-5

Characters
A character literal is created by enclosing a single character inside single quotation marks. For example: 'a', 'm', 'F', '2', '}' etc.

Escape Sequences
Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C programming. For example: newline(enter), tab, question mark etc.


Escape Sequences	Character
\b	Backspace
\f	Form feed
\n	Newline
\r	Return
\t	Horizontal tab
\v	Vertical tab
\\	Backslash
\'	Single quotation mark
\"	Double quotation mark
\?	Question mark
\0	Null character

String Literals
A string literal is a sequence of characters enclosed in double-quote marks. For example:

"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline

Constants
If you want to define a variable whose value cannot be changed, you can use the const keyword. This will create a constant. For example,

const double PI = 3.14;
PI = 2.9; //Error


C Data Types
In C programming, data types are declarations for variables. This determines the type and size of data associated with variables.

Type	Size (bytes)		Format Specifier
int	at least 2, usually 4	%d, %i
char	1					%c
float	4					%f
double	8					%lf
short int	2 usually		%hd
unsigned int at least 2, 	%u
				usually 4
long int	at least 4, 	%ld, %li
			usually 8
long long int	at least 8	%lld, %lli
unsigned long int	at least 4	%lu
unsigned long long int	at least 8	%llu

signed char	1				%c
unsigned char	1			%c
long double	at least 10, usually 12 or 16	%Lf

float and double
float and double are used to hold real numbers.

float salary;
double price;
In C, floating-point numbers can also be represented in exponential. For example,

float normalizationFactor = 22.442e2;
What's the difference between float and double?

The size of float (single precision float data type) is 4 bytes. And the size of double (double precision float data type) is 8 bytes.


void
void is an incomplete type. It means "nothing" or "no type". You can think of void as absent.
Note that, you cannot create variables of void type.

You can always check the size of a variable using the sizeof() operator.

#include <stdio.h>
int main() {
  short a;

  printf("size of short = %d bytes\n", sizeof(a));

  return 0;
}


signed - allows for storage of both positive and negative numbers
unsigned - allows for storage of only positive numbers

// valid codes
unsigned int x = 35;
int y = -35;  // signed int
int z = 36;  // signed int

// invalid code: unsigned int cannot hold negative integers
unsigned int num = -35;

C Output
In C programming, printf() is one of the main output function. The function sends formatted output to the screen.

The return 0; statement inside the main() function is the "Exit status" of the program. It's optional.

how to print ASCII Value

#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);

    // When %c is used, a character is displayed
    printf("You entered %c.\n",chr);

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.", chr);
    return 0;
}

1. WAP to print the greatest no of three number
2. WAP to take an input of char and checkt it is number, digit, or special charcter,
3. WAP to reverse of the number
4. WAp to take input of 5 subject and calculate percentage and print the
grade of students
   A  above 80%
   B  above 60%
   C  above 48%
   D  above 36%
   Fail below 36

Types of Comments
There are two ways to add comments in C:

// - Single Line Comment
/*...*/ - Multi-line Comment


Use of Comments in C
1. Make Code Easier to Understand
2. Using Comments for debugging



C Arithmetic Operators
+	addition or unary plus
-	subtraction or unary minus
*	multiplication
/	division
%	remainder after division (modulo division) q

#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
       return 0;
}

C Increment and Decrement Operators
   pre increment ++a, post increment a++
   pre decrement --a, post decrement a--

   how to declare a variable,syntax
     datatype variablename;

   how to assing in a variable
    syntax

    variablename=value;

  we can combine these two lines in a single
  syntax datatype variable= value;
  how to creat multiple variable at once

  sytnax datatype variablename1, variablename2, variablename3;



  how to work with printf();
1. way to print simple message
   printf("your messeege will be inside ");

2. to print the variable value with the message
   printf(" your message %formate_specifier", variablename);
   eg.

    int age=22;
    printf("your age is %d", age);

we can use more than one variable in prinft() we use comma for sepration

  printf("your message %d, %c, %f", intvarialbe, charvariable, floatvariable);



char mychar='A';
printf("%d %c",mychar, mychar);


Note:- with char datatype we can use %d to print ascii value of charcter.
if we are using 2 times formate specifier then the variable should be used 2 times

what is & operator

it is called address of operator, it gives the address of variable

we use it with scanf();
how to work with scanf();

scanf("%formate_specifier ", &variableName);

eg. int age;
    scanf("%d", &age);
    printf("%d", &age); // we can print the address of variable.

how to take multiple inputs
   int num1, num2, num3;
   printf("enter three numbers");
   scanf("%d%d%d", &num1,&num2,&num3);

   printf("the number is %d, second is %d. third is: %d",
   num2,num1);

   printf("the number is %d, second is %d",
   num2,num1,num3);



if statements
syntax for if statements
   if(condition){

   }

  eg.
    int a=0;
    if(a)
    printf("hello");

  note if the variable is non-zero then it is treated as true
       if the variable is zero then it is false.

    int a=20;
    if(a){
    printf("hello");
    }
    printf("Bye");

syntax for if else statement

if(condition){
    // this is the true block

   }else{
    // this is false block
   }
 when condition is true it will execute true block
                is false                false block


    int a=20;
    if(a=25)
    {
    printf("hello");
    printf("tata");
    }else
    printf("Bye");
    printf("tata");



if elseif statements
syntax
if(condition){
	// get execute when 1st condition is true
}else if(condition){
	// get execute when 2nd condition is true
}else if(condition){
	// get execute when 3st condition is true
}else {
	// when all three is false
}

nested if else
syntax
  if(){
     if(){
        if(){

        }else{

        }
     }
  }else{

     if(){

     }else{

     }

  }


what is a function

syntax for function

 returntype funtionname(datatype argument, datatype argument){
  // body of the funtion
 }


here arguments are optional
  a funtion without arguments is called non-parameterized function

  void sum(){
    // body of function
  }

 a funtion with argument is called parameterized function
  void sum(int a, int b){
   int c = a+b;
  }


how to call a function (invoke the function)
syntax
      functionname(); // for non parameterized function
      funtionname(passing_values, passing_value2);
         //for parameterized function

Swap Numbers Using Temporary Variable
Swap Numbers Without Using Temporary Variables
Check whether an integer is odd or even

// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

Program to add numbers until the user enters zero

// Program to create a simple calculator

// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

Check whether a character is a vowel or consonant
C Program to Find Factorial of a Number
Check Whether the Entered Year is Leap Year or not

for Loop
The syntax of the for loop is:

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

The syntax of the while loop is:

while (testExpression) {
  // the body of the loop
}

do {
  // the body of the loop
}
while (testExpression);


while loop is known as entry controler loop, because it check the condition first and when the condition is true , it allow us to executee the body of the loop.

do while loop is known as exit controler loop, because when we execute the loop it allow us to execute the body once then it check the condition.

C switch Statement
The switch statement allows us to execute one code block among many alternatives.

switch (expression)
{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;

    default:
      // default statements
}

Function prototype
A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body.

A function prototype gives information to the compiler that the function may later be used in the program.

Syntax of function prototype
returnType functionName(type1 argument1, type2 argument2, ...);

Syntax of function call
functionName(argument1, argument2, ...);

#include <stdio.h>
int addNumbers(int a, int b);
void multiplyNumbers();         // function prototype
int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);
    multiplyNumbers();
    multiplyNumbers();      // function call
    printf("sum = %d",sum);
    return 0;
}

void multiplyNumbers(){
	  int result;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    result= n1*n2;
    printf("%d", result);

}

int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}

Check whether a number is a palindrome or not
Display Fibonacci series
Count number of digits of an integer

C Recursion
A function that calls itself is known as a recursive function. And, this technique is known as recursion.

void MyFunction()
{
    ... .. ...
    MyFunction();   // function calling itself
    ... .. ...
}

int main()
{
    ... .. ...
    MyFunction();
    ... .. ...
}


Convert a binary number to decimal and vice-versa
Convert an octal Number to decimal and vice-versa
Convert a binary number to octal and vice-versa

using recursion Display Fibonacci series
Reverse a sentence using recursion
Calculate the power of a number using recursion

factorial of n (n!) = 1 * 2 * 3 * 4 *...  * n


void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}


int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}


  // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }



// Program to find the average of n numbers using arrays
C program to find the sum of two matrices

How to declare an array?
dataType arrayName[arraySize];

the size and type of an array cannot be changed once it is declared.
initialize an array
It is possible to initialize an array during declaration.
int mark[5] = {19, 10, 8, 17, 9};
int mark[] = {19, 10, 8, 17, 9};


C Pointers
If you have a variable var in your program, &var will give you its address in the memory.

C Pointers
Pointers (pointer variables) are special variables that are used to store addresses rather than values.

Pointer Syntax
Here is how we can declare pointers.

int* p;
int *p1;
int * p2;
int* p1, p2;

Common mistakes when working with pointers
Suppose, you want pointer pc to point to the address of c. Then,

int c, *pc;

// pc is address but c is not
pc = c;  // Error

// &c is address but *pc is not
*pc = &c;  // Error

// both &c and pc are addresses
pc = &c;  // Not an error

// both c and *pc are values
*pc = c;  // Not an error


int fib(int a){

	if(a==0) return 0
	else if (a==1) return 1
	else return fib(a-1)+ fib(a-2);
}

 if i=0 ,  0
 if i=1 ,   1
 if i=2,    1
    i=3     2
    i=4     3
    i=5

 n=5
 0,1,1,2,3


 for(i=0;i<5;i++){
     printf("%d", fib(i));
 }








n =5
  5+4+3+2+1= 15

  5+ (10)
       4+(6)
          3 + (3)
                2+ (1)
                     1
  int fun(int a){

    while(a>=1){
     if(a==1)
      {
        return a;
     }
     else{
        return a+fun(a-1);
     }


    }



  }

   void myfun(){

   }


C Dynamic Memory Allocation
As you know, an array is a collection of a fixed number of values. Once the size of an array is declared, you cannot change it.

Sometimes the size of the array you declared may be insufficient. To solve this issue, you can allocate memory manually during run-time. This is known as dynamic memory allocation in C programming.

To allocate memory dynamically, library functions are malloc(), calloc(), realloc() and free() are used. These functions are defined in the <stdlib.h> header file.


malloc()
The name "malloc" stands for memory allocation.

The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.

Syntax of malloc()
ptr = (castType*) malloc(size);
example  ptr = (float*) malloc( * sizeof(float));
   float = 8byte *100= 400 byte

calloc()
The name "calloc" stands for contiguous allocation.
The malloc() function allocates memory and leaves the memory uninitialized, whereas the calloc() function allocates memory and initializes all bits to zero.

Syntax of calloc()
ptr = (castType*)calloc(n, size);
Example:
ptr = (int*) calloc(25, sizeof(int));

free()
Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own. You must explicitly use free() to release the space.

Syntax of free()
free(ptr);

// Program to calculate the sum of n numbers entered by the user
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i, *ptr, sum = 0;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  ptr = (int*) malloc(n * sizeof(int));
  // if memory cannot be allocated
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }
  printf("Sum = %d", sum);
    // deallocating the memory
  free(ptr);
  return 0;
}

C realloc()
If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using the realloc() function.

Syntax of realloc()
ptr = realloc(ptr, x);
Here, ptr is reallocated with a new size x.

 example ptr = realloc(ptr, n2 * sizeof(int));
             n2 is the new size



int arr[10]={11,12,13,14,15,16,17,18,19,20};
printf("%d", arr[5]); // output 16

printf("%d", arr);


1.Wap Access elements of an array using pointers
2.Wap calculate average of an array don't use pointers,
3.Wap C Program Swap 3 Numbers in Cyclic Order Using Call by Reference/ pointer

4. create two array and merge into third array
   third array values should be sorted.


Strings
In C programming, a string is a sequence of characters terminated with a null character \0

char c[] = "c string";

How to declare a string?
char s[5];

How to initialize strings?
char c[] = "abcd";
char c[50] = "abcd";
char c[] = {'a', 'b', 'c', 'd', '\0'};
char c[5] = {'a', 'b', 'c', 'd', '\0'};


 char new[0]=d
      new[1]=c
      new[2]=b
      new[3]=a
      new[4]='\0'

Assigning Values to Strings
Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example,

char c[100];
c = "C programming";  // Error! array type is not assignable.

scanf() to read a string

#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}






How to read a line of text?
You can use the
fgets() function to read a line of string.
puts() to display the string.

#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}




Passing Strings to Functions
 how to pass a string to a funtion
 syntax
   datatype functionname(datatype arr[]){}

 void myString(char i[]){
   // code for function
 }

Commonly Used String Functions
strlen() - calculates the length of a string
strcpy() - copies a string to another
strcmp() - compares two strings
strcat() - concatenates two strings
strlwr()	converts string to lowercase
strupr()	converts string to uppercase

Note: When you use strcpy(), the size of the destination string should be large enough to store the copied string. Otherwise, it may result in undefined behavior.


Find the occurance of a character in a string
Find the number of vowels, consonants, digits and white spaces
Reverse a string using recursion
Find the length of a string
Concatenate two strings
Remove all characters in a string except alphabets
Sort elements in the lexicographical order (dictionary order)

a struct (or structure) is a collection of variables (can be of different types) under a single name.

To define a struct, the struct keyword is used.
Syntax of struct
struct structureName {
  dataType member1;
  dataType member2;
  ...
};
  Struct structureName b1,b2,b3;

A structure contains a number of data types grouped together.
These data types may or may not be of the same type. The
following example illustrates the use of this data type.
main( )
{
 struct book
 {
 char name ; // declaration of variable for book
 float price ;
 int pages ;
 int publication
 } ;
 struct book b1, b2, b3 ;
 printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ;
 scanf ( "%c %f %d", &b1.name, &b1.price, &b1.pages ) ;
 scanf ( "%c %f %d", &b2.name, &b2.price, &b2.pages ) ;
 scanf ( "%c %f %d", &b3.name, &b3.price, &b3.pages ) ;

 printf ( "\nAnd this is what you entered" ) ;
 printf ( "\n%c %f %d", b1.name, b1.price, b1.pages ) ;
 printf ( "\n%c %f %d", b2.name, b2.price, b2.pages ) ;
 printf ( "\n%c %f %d", b3.name, b3.price, b3.pages ) ;
}


struct book
{
 char name ;
 float price ;
 int pages ;
} ;
struct book b1, b2, b3 ;

is same as...
struct book
{
 char name ;
 float price ;
 int pages ;
} b1, b2, b3 ;
or even...

declaration and initialization of struct in single line.
struct book b1 = { "Basic", 130.00, 550 } ;
struct book b2 = { "Physics", 150.80, 800 } ;

Note the following points while declaring a structure type:

a. The closing brace in the structure type declaration must be
followed by a semicolon.

b. It is important to understand that a structure type declaration
does not tell the compiler to reserve any space in memory. All
a structure declaration does is, it defines the ‘form’ of the
structure.

c. Usually structure type declaration appears at the top of the
source code file, before any variables or functions are defined.
In very large programs they are usually put in a separate
header file, and the file is included (using the preprocessor
directive #include) in whichever program we want to use this
structure type.

Whatever be the elements of a structure, they are always stored in
contiguous memory locations.

Array of Structures

/* Usage of an array of structures */
main( )
{
 struct book
 {
 char name ;
 float price ;
 int pages ;
 } ;
 struct book b[100] ;
 int i ;
 for ( i = 0 ; i <= 99 ; i++ )
 {
 printf ( "\nEnter name, price and pages " ) ;
 scanf ( "%c %f %d", &b[i].name, &b[i].price, &b[i].pages ) ;
 }
 for ( i = 0 ; i <= 99 ; i++ )
 printf ( "\n%c %f %d", b[i].name, b[i].price, b[i].pages ) ;
}

linkfloat( )
{
 float a = 0, *b ;
 b = &a ; /* cause emulator to be linked */
 a = *b ; /* suppress the warning - variable not used */
}

If you don’t
define it you are bound to get the error "Floating Point
Formats Not Linked" with majority of C Compilers. What
causes this error to occur? When parsing our source file, if the
compiler encounters a reference to the address of a float, it
sets a flag to have the linker link in the floating-point
emulator. A floating point emulator is used to manipulate
floating point numbers in runtime library functions

how to copy data of structure varialble

/* piece-meal copying */
 strcpy ( e2.name, e1.name ) ;
 e2.age = e1.age ;
 e2.salary = e1.salary ;

/* copying all elements at one go */
 e3 = e2 ;

Nested structure
One structure can be nested within another structure
 main( )
{
	 struct address {
	 char phone[15] ;
	 char city[25] ;
	 int pin ;
	 } ;

 struct emp
 {
 char name[25] ;
 struct address a ; // here we create structure as a variable for emp
                    // now the address is part of emp structure
 } ;
 struct emp e = { "jeru", "531046", "nagpur", 10 };
 printf ( "\nname = %s phone = %s", e.name, e.a.phone ) ;
 printf ( "\ncity = %s pin = %d", e.a.city, e.a.pin ) ;
}









 Q1. create a structure of a college and then copy the data of structure into another structure.
Q2. create a nested structure and show all the data
Q3. create a nested structure and the level should be at least 3










 a structure variable can also be passed to a function. We may either pass individual structure
elements or the entire structure variable at one go.
// passing structure element to a function
struct book
 {
 char name[25] ;
 char author[25] ;
 int callno ;
 } ;

 main( )
{
struct book b1 = { "Let us C", "YPK", 101 } ;

 display ( b1.name, b1.author, b1.callno ) ; // passing elements to
 												the function
}
 // display function take arguments of structure elements
 display ( char *s, char *t, int n )
{
 printf ( "\n%s %s %d", s, t, n ) ;
}
The way we can have a pointer pointing to an int, or a pointer
pointing to a char, similarly we can have a pointer pointing to
a struct. Such pointers are known as ‘structure pointers’.

main( )
{
 struct book
 {
 char name[25] ;
 char author[25] ;
 int callno ;
 } ;
 struct book b1 = { "Let us C", "YPK", 101 } ;
 struct book *ptr ;			 // creating pointer of structure
 ptr = &b1 ; 				// assing address to pointer
 printf ( "\n%s %s %d", b1.name, b1.author, b1.callno ) ;
   // how to print data of pointer we use -> instead of . operator
 printf ( "\n%s %s %d", ptr->name, ptr->author, ptr->callno ) ;
}

C provides an operator ->, called an arrow operator to refer to
the structure elements.
syntax
  struct structname *pointervariable;
         pointervariable= &structurevarialbe // &b here, b is varialbe


/* Passing address of a structure variable to display function  */
display ( &b1 ) ;        // calling of the function

 display ( struct book *b )  // defination of the function
{
 printf ( "\n%s %s %d", b->name, b->author, b->callno ) ;
}
Uses of Structures
(a) Clearing the contents of the screen
(b) Placing the cursor at an appropriate position on screen
(c) Drawing any graphics shape on the screen
(d) Receiving a key from the keyboard
(e) Checking the memory size of the computer
(f) Finding out the list of equipment attached to the computer
(g) Formatting a floppy
(h)Hiding a file from the directory
(i)Displaying the directory of a disk
(j)Sending the output to printer
(k) Interacting with the mouse

Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the
collage.
(a) Write a function to print names of all students who joined
in a particular year.
(b) Write a function to print the data of a student whose roll
number is given.
	1. void getNames(int year){ };
   	2. void getData(int rollNo){};

Q 2. Create a structure to specify data of customers in a bank. The
data to be stored is: Account number, Name, Balance in
account. Assume maximum of 200 customers in the bank.
(a) Write a function to print the Account number and name
of each customer with balance below Rs. 100.
(b) If a customer request for withdrawal or deposit, it is given in the form:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is
insufficient for the specified withdrawal”.


how to create structure
how to create variable for structure
how to assing values into variable
how to acess the varialbe of structure

how to print structure through for loop
how to take input through for loop
how to print structure through for loop

how to copy data of one structure to another ,

how to create nested structure
how to print nested structure
how to pass values of structure variale to a funtion()
how to pass structure to a function


 *    1 6. 54321   8. * * * * *  9.  *******  10.      *
 **         5432       * * * *        *****          ***
 ***         543        * * *          ***         *****
 **           54         * *            *        *******
 *             5          *




21	*        22 *******  23.*****   24. *****25.    *****
   ***	         *****       *****       *****     *****
  *****	          ***         *****       *****   *****
 *******           *           *****     *****     *****
	                            *****   *****       *****
      1           1         1
26.  1 1   27.   121  28.  131      14  A     15.     A
    1 2 1       12321     15531         A B          AABB
   1 2 2 1     1234321   1999661        A B C       AAACCC
  1 2 2 2 1   123454321                 A B C D    AAAADDDD
 1 2 2 2 2 1                            A B C D E AAAAEEEEE

16. *        17.     *  18.      *    19.   **** **** 20.    *****
    **              **          ***         ***   ***       *****
    ***            ***         *****        **     **      *****
    ****          ****        *******       *       *     *****
    ***            ***         *****        **     **    *****
    **              **          ***         ***   ***   *****
    *                *           *          **** ****
File Handling
A file is a container in computer storage devices used for storing data.

Why files are needed?
When a program is terminated, the entire data is lost. Storing in a file will preserve your data even if the program terminates.
If you have to enter a large number of data, it will take a lot of time to enter them all.
However, if you have a file containing all the data, you can easily access the contents of the file using a few commands in C.
You can easily move your data from one computer to another without any changes.

Types of Files
When dealing with files, there are two types of files:

Text files
Binary files

1. Text files
Text files are the normal .txt files. You can easily create text files using any simple text editors such as Notepad.
When you open those files, you'll see all the contents within the file as plain text. You can easily edit or delete the contents.
They take minimum effort to maintain, are easily readable, and provide the least security and takes bigger storage space.

2. Binary files
Binary files are mostly the .bin files in your computer.
Instead of storing data in plain text, they store it in the binary form (0's and 1's).
They can hold a higher amount of data, are not readable easily, and provides better security than text files.

File Operations
In C, you can perform four major operations on files, either text or binary:

Creating a new file
Opening an existing file
Closing a file
Reading from and writing information to a file

Working with files
When working with files, you need to declare a pointer of type file. This declaration is needed for communication between the file and the program.

FILE *fptr;

Opening a file - for creation and edit
Opening a file is performed using the fopen() function defined in the stdio.h header file.

The syntax for opening a file in standard I/O is:

ptr = fopen("fileopen","mode");

fopen("E:\\cprogram\\newprogram.txt","w");

 'w'.
The writing mode allows you to create and edit (overwrite) the contents of the file.

fopen("E:\\cprogram\\oldprogram.bin","rb");
for reading in binary mode 'rb'.

The reading mode only allows you to read the file, you cannot write into the file.

Mode	Meaning of Mode      	During  Inexistence of file
r	    Open for reading.	If the file does not exist, fopen() returns NULL.

rb	   Open for reading in binary mode. 	If the file does not exist, fopen() returns NULL.

w	Open for writing.	If the file exists, its contents are overwritten.    If the file does not exist, it will be created.

wb	Open for writing in binary mode.	If the file exists, its   contents are overwritten.
    If the file does not exist, it will be created.
a	Open for append.             Data is added to the end of the file.	                     If the file does not exist, it will be created.

ab	Open for append in binary mode.
				Data is added to the end of the file.	If the file does not exist, it will be created.

r+	Open for both reading and writing.
            If the file does not exist, fopen() returns NULL.

rb+	Open for both reading and writing in binary mode.
       	If the file does not exist, fopen() returns NULL.

w+	Open for both reading and writing.	If the file exists, its contents are overwritten.
				If the file does not exist, it will be created.

wb+	Open for both reading and writing in binary mode.	If the file exists, its contents are overwritten.
				If the file does not exist, it will be created.

a+	Open for both reading and appending.	If the file does not exist, it will be created.

ab+	Open for both reading and appending in binary mode.	If the file does not exist, it will be created.

   for text files               binary files
     w - writing  w+             wb  wb+
     r - reading  r+             rb  rb+
     a appending  a+             ab  ab+
Closing a File
The file (both text and binary) should be closed after reading/writing.
Closing a file is performed using the fclose() function.

fclose(fptr);
Here, fptr is a file pointer associated with the file to be closed.

Reading and writing to a text file
For reading and writing to a text file, we use the functions fprintf() and fscanf().

They are just the file versions of printf() and scanf(). The only difference is that fprintf() and fscanf() expects a pointer to the structure FILE.
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
         // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\\program.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Enter num: ");
   scanf("%d",&num);
   fprintf(fptr,"%d",num);
   fclose(fptr);
   return 0;
}
Example 2:Read from a text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");
        // Program exits if the file pointer returns NULL.
       exit(1);
   }
   fscanf(fptr,"%d", &num);
   printf("Value of n=%d", num);
   fclose(fptr);
   return 0;
}

Reading and writing to a binary file
Functions fread() and fwrite() are used for reading from and writing to a file on the disk respectively in case of binary files.

Writing to a binary file
To write into a binary file, you need to use the fwrite() function. The functions take four arguments:

address of data to be written in the disk
size of data to be written in the disk
number of such type of data
pointer to the file where you want to write.

syntax for fwrite();
fwrite(addressData, sizeData, numbersData, pointerToFile);


Write to a binary file using fwrite()
#include <stdio.h>
#include <stdlib.h>
struct threeNum
{
   int n1, n2, n3;
};
int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   if ((fptr = fopen("C:\\program.bin","wb")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fptr);
   }
   fclose(fptr);

   return 0;
}

Reading from a binary file
Function fread() also take 4 arguments similar to the fwrite() function as above.
fread(addressData, sizeData, numbersData, pointerToFile);
Example 4: Read from a binary file using fread()
#include <stdio.h>
#include <stdlib.h>
struct threeNum
{
   int n1, n2, n3;
};
int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   if ((fptr = fopen("C:\\program.bin","rb")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr);
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
   }
   fclose(fptr);
  return 0;
}
C program to read name and marks of n number of students from and store them in a file. If the file previously exits, add the information to the file.

#include <stdio.h>
int main()
{
   char name[50];
   int marks, i, num;

   printf("Enter number of students: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("C:\\student.txt", "a"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }

   fclose(fptr);
   return 0;
}


C program to write all the members of an array of structures to a file using fwrite(). Read the array from the file and display on the screen.


What is a NULL pointer?
A pointer pointing to nothing is called so. Eg: char *p=NULL;

What is the meaning of base address of the array?
The starting address of the array is called as the base address of the array.

What is the difference between variable declaration and variable definition?

What are the different ways of passing parameters to the functions? Which to use when?
Call by value − We send only values to the function as parameters. We choose this if we do not want the actual parameters to be modified with formal parameters but just used.

Call by reference − We send address of the actual parameters instead of values. We choose this if we do want the actual parameters to be modified with formal parameters.





What is a NULL statement?
A null statement is no executable statements such as ; (semicolon).

Eg: int count = 0;
while( ++count<=10 ) ;

What is a string length?
It is the count of character excluding the ‘\0’ character.


#include <stdio.h>
int main( )
{
int a, c;
float b;
a = 25; b=3.24; c=a+b*b–35;
}





#include <stdio.h>
int main( )
{
int a, b, c ;
scanf ( "%d %d %d", &a, &b, &c ) ;
}

int main( )
{
int m1, m2, m3;
printf ( "Enter values of marks in 3 subjects");
scanf ( "%d %d %d", &m1,&m2,&m3);
printf ( "You entered %d %d %d", m1, m2, m3) ;
}


float b = a + 3.1, a = 1.5 ;



Types of Instructions
     three types of instructions in C:
(a) Type Declaration Instruction –
     declaration and initialization

(b) Arithmetic Instruction – This instruction is used to perform
arithmetic operations on constants and variables.


int a, b, c, d ;
a = b = c = 10 ;

int a = b = c = d = 10 ;













(c) Control Instruction –



 C allows only one variable on left-hand side of =. That is, z = k * l is
legal, whereas k * l = z is illegal


Also note that on using % the sign of
the remainder is always same as the sign of the numerator. Thus -5
% 2 yields –1, whereas, 5 % -2 yields 1


char x, y ;
int z ;
x = 'a' ;
y = 'b' ;
z = x + y

There is no operator in C to perform exponentiation operation
a= pow ( 3.0, 2.0 ) ;
The pow( ) function works only
with real numbers, hence we have used 3.0 and 2.0 instead of 3 and
2.



Operation   Result            Operation       Result
5 / 2         2                2/5            0
5.0 / 2       2.5              2.0/5          0.4
5 / 2.0       2.5              2.0/5.0        0.4
5.0 / 2.0     2.5              2/5.0          0.4

Priority Operators Description
1st     * / %
2nd      + -
3rd      =


# include <stdio.h>
int main( )
{
float a = 5, b = 2 ;
int c, d ;
c = a % b ;
d = a / 2 ;
printf ( "%d\n", d ) ;
return 0 ;
}



# include <stdio.h>
int main( )
{
printf ( "nn \n\n nn\n" ) ;
printf ( "nn /n/n nn/n" ) ;
return 0 ;
}





1. The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.

2. Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.

3. If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios

4. While purchasing certain items, a discount of 10% is
offered if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a program to
calculate the total expenses.




if( 3 + 2 % 5 )
printf ( "This works" ) ;













if(a=10)
printf ( "Even this works" ) ;






if ( -5 )
printf ( "Surprisingly even this works" ) ;








# include <stdio.h>
int main( )
{
int a = 300, b, c ;
if ( a >= 400 )
 b = 300 ;
c = 200 ;
printf ( "%d %d\n", b, c ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
int x = 10, y = 20 ;
if ( x == y ) ;
printf ( "%d %d\n", x, y ) ;
return 0 ;
}



# include <stdio.h>
int main( )
{
int x = 3 ;
float y = 3.0 ;
if ( x == y )
printf ( "x and y are equal\n" ) ;
else
printf ( "x and y are not equal\n" ) ;
return 0 ;
}
# include <stdio.h>
int main( )
{
int x = 3, y, z ;
y = x = 10 ;
z = x < 10 ;
printf ( "x = %d y = %d z = %d\n", x, y, z ) ;
return 0 ;
}
# include <stdio.h>
int main( )
{
int i = 65 ;
char j = ’A’ ;
if ( i == j )
printf ( "C is WOW\n" ) ;
else
printf ( "C is a headache\n" ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
float a = 12.25, b = 12.52 ;
if ( a = b )
printf ( "a and b are equal\n" ) ;
return 0 ;
}


# include <stdio.h>
 int main( )
{
int j = 10, k = 12 ;
if ( k >= j )
{
  {
   k = j ;
   j = k ;
  }
}
return 0 ;
}

# include <stdio.h>
int main( )
{
if ( 'X' < 'x' )
printf ( "ascii value of X is smaller than that of x\n" ) ;
}





 # include <stdio.h>
int main( )
{
int x = 10 ;
if ( x >= 2 ) then
printf ( "%d\n", x ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
int x = 10, y = 15 ;
if ( x % 2 = y % 3 )
printf ( "Carpathians\n" ) ;
}


# include <stdio.h>
int main( )
{
int x = 30, y = 40 ;
if ( x == y )
printf ( "x is equal to y\n" ) ;
elseif ( x > y )
printf ( "x is greater than y\n" ) ;
elseif ( x < y )
printf ( "x is less than y\n" ) ;
return 0 ;
}

5. Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard.A triangle is valid if the sum of all the three angles is equal to 180 degrees.

6. Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.

7. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.





A company insures its drivers in the following cases:
If the driver is married.
If the driver is unmarried, male & above 30 years of age.
If the driver is unmarried, female & above 25 years of age.
In all other cases, the driver is not insured. If the marital status, sex and
age of the driver are the inputs, write a program to determine whether
the driver should be insured or not.


Gender    Years of Service    Qualifications  Salary
Male       >= 10           Post-Graduate     15000
           >= 10           Graduate          10000
           < 10            Post-Graduate 	10000
           < 10 		   Graduate 		7000
Female >= 10               Post-Graduate    12000
       >= 10 				Graduate 		9000
       < 10 			Post-Graduate       10000
       < 10          	Graduate 			600


Operators
!
* / %
+ -
< > <= >=
== !=
&&
||
=

# include <stdio.h>
int main( )
{
int i ;
printf ( "Enter value of i " ) ;
scanf ( "%d", &i ) ;
if ( i = 5 )
printf ( "You entered 5\n" ) ;
else
printf ( "You entered something other than 5\n" ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
int i ;
printf ( "Enter value of i " ) ;
scanf ( "%d", &i ) ;
if ( i == 5 ) ;
printf ( "You entered 5\n" ) ;
return 0 ;
}

# include <stdio.h>
int main( )
{
int i ;
char a = 'A' ;
printf ( "%c", ( a >= 'a' ? a : '!' ) ) ;

return 0 ;
}


# include <stdio.h>
int main( )
{
int x = 20, y = 40, z = 45 ;
if ( x > y && x > z )
printf ( "biggest = %d\n", x ) ;
else if ( y > x && y > z )
printf ( "biggest = %d\n", y ) ;
else if ( z > x && z > y )
printf ( "biggest = %d\n", z ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
int code, flag ;
if ( code == 1 & flag == 0 )
printf ( "The eagle has landed\n" ) ;
return 0 ;
}


 # include <stdio.h>
int main( )
{
char spy = 'a', password = 'z' ;
if ( spy == 'a' or password == 'z' )
printf ( "All the birds are safe in the nest\n" ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
int i = 10, j = 20 ;
if ( i = 5 ) && if ( j = 10 )
printf ( "Have a nice day\n" ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
int x = 2 ;
if ( x == 2 && x != 0 );
printf ( "Hello\n" ) ;
else
printf ( "Bye\n" ) ;
return 0 ;
}

# include <stdio.h>
int main( )
{
int j = 65 ;
printf ( "j >= 65 ? %d : %c\n", j ) ;
return 0 ;
}





# include <stdio.h>
int main( )
{
int i = 10, j ;
i >= 5 ? j = 10 : j = 15 ;
printf ( "%d %d\n", i, j ) ;
return 0 ;
}





8. A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 560

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel under
consideration and output the grade of the steel




# include <stdio.h>
int main( )
{
float a = 10.0 ;
while ( a <= 10.5 )
{
printf ( "Raindrops on roses..." ) ;
printf ( "...and whiskers on kittens\n" ) ;
a = a + 0.1 ;
}
return 0 ;
}





# include <stdio.h>
int main( )
{
int i = 1 ;
while ( i <= 10 ) ;
{
printf ( "%d\n", i ) ;
i = i + 1 ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
int x = 4, y, z ;
y = --x ;
z = x-- ;
printf ( "%d %d %d\n", x, y, z ) ;
return 0 ;
}




 # include <stdio.h>
int main( )
{
int x = 4, y = 3, z ;
z = x-- - y ;
printf ( "%d %d %d\n", x, y, z ) ;
return 0 ;
}


 # include <stdio.h>
int main( )
{
while ( 'a' < 'b' )
printf ( "malayalam is a palindrome\n" ) ;
return 0 ;
}






# include <stdio.h>
int main( )
{
int i ;
while ( i = 10 )
{
printf ( "%d\n", i ) ;
i = i + 1 ;
}
return 0 ;
}


 #include <stdio.h>
int main( )
{
float x = 1.1 ;
while ( x == 1.1 )
{
printf ( "%f\n", x ) ;
x = x – 0.1 ;
}
return 0 ;
}



for ( i = 10 ; i ; i -- )
printf ( "%d ", i ) ;


for ( i < 4 ; j = 5 ; j = 0 )
printf ( "%d ", i ) ;


for ( i = 1; i <=10 ; printf ( "%d ", i++ ) )
;

for ( scanf ( "%d", &i ) ; i <= 10 ; i++ )
printf ( "%d", i ) ;


# include <stdio.h>
int main( )
{
int i ;
for ( i = 1 ; i <= 10 ; i = i + 1 )
printf ( "%d\n", i ) ;
return 0 ;
}






# include <stdio.h>
int main( )
{
int i ;
for ( i = 1 ; i <= 10 ; )
{
printf ( "%d\n", i ) ;
i = i + 1 ;
}
return 0 ;
}


# include <stdio.h>
int main( )
{
int i = 1 ;
for ( ; i <= 10 ; i = i + 1 )
printf ( "%d\n", i ) ;
return 0 ;
}



# include <stdio.h>
int main( )
{
int i = 1 ;
for ( ; i <= 10 ; )
{
printf ( "%d\n", i ) ;
i = i + 1 ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
int i ;
for ( i = 0 ; i++ < 10 ; )
printf ( "%d\n", i ) ;
return 0 ;
}



# include <stdio.h>
int main( )
{
int i ;
for ( i = 0 ; ++i <= 10 ; )
printf ( "%d\n", i ) ;
return 0 ;
}



# include <stdio.h>
int main( )
{
int i = 1 , j = 1 ;
while ( i++ <= 100 )
{
	while ( j++ <= 200 )
	{
		if ( j == 150 )
		break ;
		else
		printf ( "%d %d\n", i, j ) ;
	}
}
return 0 ;
}



# include <stdio.h>
int main( )
{
char another = 'y' ;
int num ;
for ( ; another == 'y' ; )
{
printf ( "Enter a number " ) ;
scanf ( "%d", &num ) ;
printf ( "square of %d is %d\n", num, num * num ) ;
printf ( "Want to enter another number y/n " ) ;
fflush ( stdin ) ;
scanf ( "%c", &another ) ;
}
return 0 ;
}




#include <stdio.h>
int main( )
{
int i = 0 ;
for ( ; i ; )
printf ( "Here is some mail for you\n" ) ;
return 0 ;
}




#include <stdio.h>
int main( )
{
int i ;
for ( i = 1 ; i <= 5 ; printf ( "%d\n", i ) ) ;
i++ ;
return 0 ;
}






#include <stdio.h>
int main( )
{
int i = 1, j = 1 ;
for ( ; ; )
{
	if ( i > 5 )
	break ;
	else
	j += i ;
	printf ( "%d\n", j ) ;
	i += j ;
}
return 0 ;
}




# include <stdio.h>
int main( )
{
int i = 22 ;
switch ( i )
{
case 121 :
printf ( "I am in case 121 \n" ) ;
break ;
case 7 :
printf ( "I am in case 7 \n" ) ;
break ;
case 22 :
printf ( "I am in case 22 \n" ) ;
break ;
default :
printf ( "I am in default \n" ) ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
char ch ;
printf ( "Enter any one of the alphabets a, b, or c " ) ;
scanf ( "%c", &ch ) ;
switch ( ch )
{
	case 'a' :
	case 'A' :
	printf ( "a as in ashar\n" ) ;
	break ;
	case 'b' :
	case 'B' :
	printf ( "b as in brain\n" ) ;
	break ;
	case 'c' :
	case 'C' :
	printf ( "c as in cookie\n" ) ;
	break ;
	default :
	printf ( "wish you knew what are alphabets\n" ) ; }
return 0 ;
}

}



# include <stdio.h>
int main( )
{
int i, j ;
printf ( "Enter value of i" ) ;
scanf ( "%d", &i ) ;
switch ( i )
{
printf ( "Hello\n" ) ;
case 1 :
j = 10 ;
break ;
case 2 :
j = 20 ;
break ;
}
return 0 ;
}


switch ( i + j * k )
switch ( 23 + 45 % 4 * k )
switch ( a < 4 && b > 7 )




# include <stdio.h>
int main( )
{
char suite = 3 ;
switch ( suite )
{
case 1 :
printf ( "Diamond\n" ) ;
case 2 :
printf ( "Spade\n" ) ;
default :
printf ( "Heart\n" ) ;
}
printf ( "I thought one wears a suite\n" ) ;
return 0 ;
}



# include <stdio.h>
int main( )
{
int c = 3 ;
switch ( c )
{
case '3' :
printf ( "You never win the silver prize\n" ) ;
break ;
case 3 :
printf ( "You always lose the gold prize\n" ) ;
break ;
default :
printf ( "Of course provided you win a prize\n" ) ;
}
return 0 ;
}


# include <stdio.h>
 int main( )
{
int i = 3 ;
switch ( i )
{
case 0 :
printf ( "Customers are dicey\n" ) ;
case 1 + 0 :
printf ( "Markets are pricey\n" ) ;
case 4 / 2 :
printf ( "Investors are moody\n" ) ;
case 8 % 5 :
printf ( "At least employees are good\n" ) ;
}
return 0 ;
}


 # include <stdio.h>
int main( )
{
int k ;
float j = 2.0 ;
switch ( k = j + 1 )
{
case 3 :
printf ( "Trapped\n" ) ;
break ;
default :
printf ( "Caught!\n" ) ;
}
return 0 ;
}


# include <stdio.h>
int main( )
{
int ch = 'a' + 'b' ;
switch ( ch )
{
case 'a' :
case 'b' :
printf ( "You entered b\n" ) ;
case 'A' :
printf ( "a as in ashar\n" ) ;
case 'b' + 'a' :
printf ( "You entered a and b\n" ) ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
int i = 1 ;
switch ( i - 2 )
{
case -1 :
printf ( "Feeding fish\n" ) ;
case 0 :
printf ( "Weeding grass\n" ) ;
case 1 :
printf ( "Mending roof\n" ) ;
default :
printf ( "Just to survive\n" ) ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
int suite = 1 ;
switch ( suite ) ;
{
case 0 ;
printf ( "Club\n" ) ;
case 1 ;
printf ( "Diamond\n" ) ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
int temp ;
scanf ( "%d", &temp ) ;
switch ( temp )
{
case ( temp <= 20 ) :
printf ( "Ooooooohhhh! Damn cool!\n" ) ;
case ( temp > 20 && temp <= 30 ) :
printf ( "Rain rain here again!\n" ) ;
case ( temp > 30 && temp <= 40 ) :
printf ( "Wish I am on Everest\n" ) ;
default :
printf ( "Good old nagpur weather\n" ) ;
}
return 0 ;
}



# include <stdio.h>
int main( )
{
float a = 3.5 ;
switch ( a )
{
case 0.5 :
printf ( "The art of C\n" ) ; break ;
case 1.5 :
printf ( "The spirit of C\n" ) ; break ;
case 2.5 :
printf ( "See through C\n" ) ; break ;
case 3.5 :
printf ( "Simply c\n" ) ;
}
return 0 ;
}



# include <stdio.h>
 int main( )
{
int a = 3, b = 4, c ;
c = b – a ;
switch ( c )
{
case 1 || 2 :
printf ( "God give me a chance to change things\n" ) ;
break ;
case a || b :
printf ( "God give me a chance to run my show\n" ) ;
break ;
}
return 0 ;
}


# include <stdio.h>
void italy( ) ;
void brazil( ) ;
void argentina( ) ;
int main( )
{
printf ( "I am in main\n" ) ;
italy( ) ;
brazil( ) ;
argentina( ) ;
return 0 ;
}
void italy( )
{
printf ( "I am in italy\n" ) ;
}
void brazil( )
{
printf ( "I am in brazil\n" ) ;
}
void argentina( )
{
printf ( "I am in argentina\n" ) ;
}




# include <stdio.h>
void italy( ) ;
void brazil( ) ;
void argentina( ) ;
int main( )
{
printf ( "I am in main\n" ) ;
italy( ) ;
printf ( "I am finally back in main\n" ) ;
return 0 ;
}
void italy( )
{
printf ( "I am in italy\n" ) ;
brazil( ) ;
printf ( "I am back in italy\n" ) ;
}
void brazil( )
{
printf ( "I am in brazil\n" ) ;
argentina( ) ;
}
void argentina( )
{
printf ( "I am in argentina\n" ) ;
}




int a = 1 ;
printf ( "%d %d %d\n", a, ++a, a++ ) ;









# include <stdio.h>
int main( )
{
int i = 10, j = 20 ;
printf ( "%d %d %d\n", i, j ) ;
printf ( "%d\n", i, j ) ;
return 0 ;
}




# include <stdio.h>
void display( ) ;
int main( )
{
printf ( "Learn C\n" ) ;
display( ) ;
return 0 ;
}
void display( )
{
printf ( "Followed by C++, C# and Java!\n" ) ;
main( ) ;
}



 #include <stdio.h>
int main( )
{
void slogan( ) ;
int c = 5 ;
c = slogan( ) ;
printf ( "%d\n", c ) ;
return 0 ;
}
void slogan( )
{
printf ( "Only He men use C!\n" ) ;
}



# include <stdio.h>
int addmult ( int, int )
int main( )
{
int i = 3, j = 4, k, l ;
k = addmult ( i, j ) ;
l = addmult ( i, j ) ;
printf ( "%d %d\n", k, l ) ;
return 0 ;
}
int addmult ( int ii, int jj )
{
int kk, ll ;
kk = ii + jj ;
ll = ii * jj ;
return ( kk, ll ) ;
}



# include <stdio.h>
void message( ) ;
int main( )
{
message( ) ;
message( ) ;
return 0 ;
}
void message( ) ;
{
printf ( "Praise worthy and C worthy are synonyms\n" ) ;
}






# include <stdio.h>
void fun ( int, int );
int main( )
{
int i = 5, j = 2;
fun ( i, j );
printf ( "%d %d\n", i, j );
return 0;
}
void fun ( int i, int j )
{
i = i * i;
j = j * j;
}


# include <stdio.h>
void fun ( int *, int * ) ;
int main( )
{
int i = 5, j = 2 ;
fun ( &i, &j ) ;
printf ( "%d %d\n", i, j ) ;
return 0 ;
}
void fun ( int *i, int *j )
{
*i = *i * *i ;
*j = *j * *j ;
}


# include <stdio.h>
int main( )
{
float a = 13.5 ;
float *b, *c ;
b = &a ; /* suppose address of a is 1006 */
c = b ;
printf ( "%u %u %u\n", &a, b, c ) ;
printf ( "%f %f %f %f %f\n", a, *(&a), *&a, *b, *c ) ;
return 0 ;
}






 # include <stdio.h>
void pass ( int, int ) ;
int main( )
{
int i = 135, a = 135, k ;
k = pass ( i, a ) ;
printf ( "%d\n", k ) ;
return 0 ;
}
void pass ( int j, int b )
int c ;
{
c = j + b ;
return ( c ) ;
}



# include <stdio.h>
void jiaayjo ( int , int )
int main( )
{
int p = 23, f = 24 ;
jiaayjo ( &p, &f ) ;
printf ( "%d %d\n", p, f ) ;
return 0 ;
}
void jiaayjo ( int q, int g )
{
q = q + q ;
g = g + g ;
}




# include <stdio.h>
void check ( int ) ;
int main( )
{
int k = 35, z ;
z = check ( k ) ;
printf ( "%d\n", z ) ;
return 0 ;
}
void check ( m )
{
int m ;
if ( m > 40 )
return ( 1 ) ;
else
return ( 0 ) ;
}



# include <stdio.h>
void function ( int * ) ;
int main( )
{
int i = 35, *z ;
z = function ( &i ) ;
printf ( "%d\n", z ) ;
return 0 ;
}
void function ( int *m )
{
return ( *m + 2 ) ;
}


# include <stdio.h>
int main( )
{
int i ;
for ( i = 0 ; i <= 50000 ; i++ )
printf ( "%d\n", i ) ;
return 0 ;
}




# include <stdio.h>
int main( )
{
float a = 13.5 ;
double b = 13.5 ;
printf ( "%f %lf\n", a, b ) ;
return 0 ;
}




# include <stdio.h>
int i = 0 ;
void val( ) ;
int main( )
{
printf ( "main's i = %d\n", i ) ;
i++ ;
val( ) ;
printf ( "main's i = %d\n", i ) ;
val( ) ;
return 0 ;
}
void val( )
{
i = 100 ;
printf ( "val's i = %d\n", i ) ;
i++ ;
}


Write a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0.

A positive integer is entered through the keyboard, write a function
to find the binary equivalent of this number :
(1) Without using recursion
(2) Using recursion

create hybrid inheritance.
  create one constructor in each class
  create one funtion
  create code for function overridding.
    tast to do
     1. check output of all constructor
     2. call the function using objects of each classs and see the difference
     3. check how the fuction overriding will work with all classes.
