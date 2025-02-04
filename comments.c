1 BASICS OF C PROGRAMMING 
  
1.1 HELLO, WORLD! PROGRAM 
  
#include <stdio.h>
int main() {
printf("Hello, World!\n");
return 0;
}

1.2 SUM OF TWO INTEGERS 
  
#include <stdio.h>
int main() {
int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("Sum: %d\n", a + b);
return 0;
}

1.3 AREA OF A RECTANGLE 
  
#include <stdio.h>
int main() {
float length, breadth;
printf("Enter length and breadth: ");
scanf("%f %f", &length, &breadth);
printf("Area: %.2f\n", length * breadth);
return 0;
}

1.4 SWAP TWO NUMBERS WITHOUT TEMPORARY VARIABLE 
  
#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("After swapping: a = %d, b = %d\n", a, b);\\ \n not working,a=%d\n for line b line 
return 0;
}

1.5 CHECK IF A NUMBER IS EVEN OR ODD 
  
#include <stdio.h>
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num % 2 == 0)\\not necessary in the condition if else...
printf("%d is even\n", num);
else
printf("%d is odd\n", num);
return 0;
}

2 CONTROL STATEMENTS 
2.1 LARGEST OF THREE NUMBERS USING IF-ELSE 
  
#include <stdio.h>
int main() {
int a, b, c;
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
if (a > b && a > c)
printf("%d is the largest\n", a);
else if (b > c)
printf("%d is the largest\n", b);
else
printf("%d is the largest\n", c);
return 0;
}

2.2 CHECK IF A NUMBER IS POSITIVE, NEGATIVE, OR ZERO 
  
#include <stdio.h>
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num > 0)
printf("%d is positive\n", num);
else if (num < 0)
printf("%d is negative\n", num);
else
printf("The number is zero\n");
return 0;
}

2.3 FACTORIAL OF A NUMBER USING A FOR LOOP 

#include <stdio.h>
int main() {
int num, factorial = 1;
printf("Enter a number: ");
scanf("%d", &num);
for (int i = 1; i <= num; i++) {
factorial *= i;
}
printf("Factorial: %d\n", factorial);
return 0;
}

2.4 PRINT THE FIRST N NATURAL NUMBERS USING A WHILE LOOP 

#include <stdio.h>
int main() {
int n, i = 1;
printf("Enter a number: ");
scanf("%d", &n);
while (i <= n) {
printf("%d ", i);
i++;
}
printf("\n");\\ not working, in order to write line b line we enter it into the loop
return 0;
}

2.5 DISPLAY MULTIPLICATION TABLE OF A GIVEN NUMBER 
  
#include <stdio.h>
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
for (int i = 1; i <= 10; i++) {
printf("%d x %d = %d\n", num, i, num * i);
}
return 0;
}

3 ARRAYS 
3.1 STORE 5 INTEGERS IN AN ARRAY AND PRINT THEM 
  
#include <stdio.h>
int main() {
int arr[5];
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
printf("Array elements: ");
for (int i = 0; i < 5; i++) {
printf("%d ", arr[i]);
}
printf("\n");\\not working,in order to write line b line we enter it into the loop2
return 0;
}

3.2 FIND THE LARGEST AND SMALLEST ELEMENTS IN AN ARRAY 
  
#include <stdio.h>
int main() {
int arr[5], largest, smallest;
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
largest = smallest = arr[0];
for (int i = 1; i < 5; i++) {
if (arr[i] > largest) largest = arr[i];
if (arr[i] < smallest) smallest = arr[i];
}
printf("Largest: %d, Smallest: %d\n", largest, smallest);\\ \n not working, largest:%d\n for print line b line
return 0;
}

3.3 CALCULATE THE SUM AND AVERAGE OF ELEMENTS IN AN ARRAY 
  
#include <stdio.h>
int main() {
int arr[5], sum = 0;
float avg;
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
for (int i = 0; i < 5; i++) {
sum += arr[i];
}
avg = sum / 5.0;
printf("Sum: %d, Average: %.2f\n", sum, avg); \\ dont write  %.2f we can write just  %f 
  return 0;
}

3.4 REVERSE AN ARRAY 
  
#include <stdio.h>
int main() {
int arr[5], temp;
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
for (int i = 0; i < 5 / 2; i++) {
temp = arr[i];
arr[i] = arr[4 - i];
arr[4 - i] = temp;
}
printf("Reversed array: ");
for (int i = 0; i < 5; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}

3.5 MERGE TWO ARRAYS INTO A SINGLE ARRAY 
  
#include <stdio.h>
int main() {
int arr1[5], arr2[5], merged[10];
printf("Enter 5 integers for array 1: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr1[i]);
}
printf("Enter 5 integers for array 2: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr2[i]);
}
for (int i = 0; i < 5; i++) {
merged[i] = arr1[i];
merged[i + 5] = arr2[i];
}
printf("Merged array: ");
for (int i = 0; i < 10; i++) {
printf("%d ", merged[i]);
}
printf("\n");\\in order to write line by line we enter it into the loop
return 0;
}

8 FILE HANDLING 
8.1 CREATE A FILE AND WRITE "HELLO, WORLD!" 
  
#include <stdio.h>
int main() {
FILE* file = fopen("hello.txt", "w");
if (file == NULL) {
printf("File could not be created.\n");
return 1;
}
fprintf(file, "Hello, World!\n");
fclose(file);
printf("File created and text written successfully.\n");\\ out of file
return 0;
}
