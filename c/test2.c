#include <stdio.h>
#include <stdlib.h>
/*example code*/
int main() {
  int x = 2 + 5;
  return 0;
}
/*white space is irrelevant in C*/
/*C is case-sensitive*/
/*x = 5 is called a definition (defining the operaiton)*/
/*int x is called declaration*/
/*any variable created inside the function is stored into the stack*/
/*when using stack you must use space in stack pointer - use space and then put value in there*/
/*^ this is the reason int x and then x = 5 are two lines used together to accomplish this*/
/*cannot declare variable without a type*/
/*^double is a float, but double takes up 8 bytes and flaot takes up 4*/

/*example code*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int x = 65; /*how to combine the lines int x; and x=5;*/
  /*double f = x;*/
  char c = (char) x;
  printf("%d\n", x);
  return 0;
}

/*once you declare a type you can't change its type*/
/*must say what type of data is being returned - that way it knows how much space it needs to return that*/
/*any other functions but main (SOMETIMES) DO have to return a value*/
/*sometimes main will return void but rarely, this is the only exception ^*/
/*usually an int is 4 bytes*/
/*C assumes you know what you're doing and will let you do just about anything so you must know what you are doing*/
/*format string - know the type of what you are printing out*/
/*printing out a character: allows a perfect followed by a type*/

int main() {
  char c[] = "Hello";
  printf("", c, c+1);
  return 0;
  }
/*double quotes are for strings, single quotes are for characters*/
/*name of array is the memory address of the first element of the array*/

/*CW: Printing*/
/*Write a short c program that intializes and prints out the following for the string below:
/*char str[] = "C programming is great"
/*1. The string itself. 2. The hexadecimal address of the first character in the string*/
/*3. The 1st character in the string*/
/*4. The integer value of the 1st character in the stirng*/
/*5. The result of he dividing the first character by the second character*/

/*The string itself*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  char str[] = "C programming is great";
  printf("%d\n", str);
  print("%x\n", str);
  print("%c\n", str);
  return 0;
}
