#include <stdio.h>

void  decimalToBinary(int n);
/*void decimalToBinary(int n)
{
    int binaryNum[32];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i-1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
*/

/*void decimalToBinary(int n) {
   int binaryNum[32];
   int i = 0;
   while (n > 0) {
      binaryNum[i] = n % 2;
      n = n / 2;
      i++;
   }
   for (int j = i - 1; j >= 0; j--)
      putchar(binaryNum[j] + '0');
}*/

int printHex(int decimal);

 int printHex(int decimal) {
    int remainder, quotient, i=0;
    char hex[100];
    int count = 0;
    
    quotient = decimal;
    
    while (quotient != 0) {
        remainder = quotient % 16;
        
        if (remainder < 10) {
            hex[i++] = 48 + remainder;
            count++;
        } else {
            hex[i++] = 'A' - 10 + remainder;
        }
        quotient = quotient / 16;
        count++;
  
    }
    
    while (i > 0) {
        putchar(hex[--i]);

        return (count);
    }
}
int printnum(int num);

/* int printnum(int num) {
    char* str = NULL;
    int temp = num;
    int digits = 0;
    
    // Count the number of digits in the integer
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    // Allocate memory for the string
    str = (char*)malloc(sizeof(char) * (digits + 1));

    // Fill the string by repeatedly dividing the integer by 10 and converting the remainder to a character.
    for (int i = 0; i < digits; i++) {
        str[i] = (num % 10) + '0';
        num /= 10;
    }
    str[digits] = '\0';

    // Reverse the string
    for (int i = 0; i < digits / 2; i++) {
        char temp = str[i];
        str[i] = str[digits - i - 1];
        str[digits - i - 1] = temp;
    }

    return str;
} */
int printInt(unsigned int n);
int printInt(unsigned int n){
int count = 0;
/*if(n<0){ // check if integer is negative
n = -n;
putchar('-');
count++;
}
*/
n >= 0;
int divisor = 1;
while(n/divisor >= 10) divisor *= 10;
while(divisor != 0){
char digit = (char)((n/divisor)+'0');
putchar(digit);
count++;
n %= divisor;
divisor /= 10;
}
return count;
}
int print_unsigned_integer(unsigned int n) {
    int count = 0;
    if (n == 0) {
        putchar('0');
        count++;
    }
    else {
        char digits[20]; // maximum number of digits in an unsigned int is 20
        int i = 0;
        while (n > 0) {
            digits[i] = (n % 10) + '0'; // get the rightmost digit
            n /= 10; // remove the rightmost digit from n
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            putchar(digits[j]); // output each digit in reverse order
            count++;
        }
    }
    return count;
}

int print_integer(int num);
int print_integer(int num) {
    char buffer[20]; // allocate a buffer to store the digits of the number
    int i = 0;
    int count = 0;
    // handle negative numbers
    if (num < 0) {
        count += putchar('-');
        num = -num;
        
    }

    // convert the number to a string in reverse order
    do {
        buffer[i++] = num % 10 + '0'; // get the last digit and add it to the buffer
    } while ((num /= 10) > 0);

    // print the digits in reverse order (i.e. the correct order)
    while (i > 0) {
        count += putchar(buffer[--i]);
    }

    putchar('\n'); // print a newline character to separate outputs
return (count);
}



// main function
/*int main() {
    int num = 1234;
    char* str = intToString(num);
    // Use your implementation of output function to print the string.
    // Here we assume the existence of an output function called "myPrint" that takes a char* as input and prints it to standard output.
    myPrint(str);
    // Don't forget to free the memory allocated for the string once you're done with it.
    free(str);
    return 0;
}*/


int main(){

  /*  float th;
    th = 4.5e-2;
    char k;
    k =97;

    char u = 'A';

    printf("hello you\n");
    printf("well is good to learn new thing");
    printf("the value of d:%e\n", th);
    printf("the valu of k :%c", k);
    printf("the valu of u: %d", u);
    return 0; */


   /*  int k, y;
    printf("please enter a charcter:\t");
    
    k = getchar();
    y = getc(stdin);

    printf("the input enter is: %c\n", k);
    printf("the second input is: %c", y);
    return 0; */


   /*  putc(67, stdout);
    putc(65, stdout);
    putc(78, stdout);
    putchar(10);
    putchar(77);
    return 0; */

    /* int num;
    float flt;

  num = 123;
  flt = 123.456;

  printf("%06d\n", num);
  printf("%06.7f\n", flt);
  return 0; */


 /*  int a, b, c;
  a = 15;
  b =150;
  c = 1500;

  printf("the value of a is :%x\n", a);
  printf("the value of a is :%x\n", b);
printf("the value of a is :%x\n", c);
return 0;
 */

/* int man;

printf("enter a character\n");

man = getchar();
putchar(man);
return 0; */

/* int a, b, c;

printf("Enter two numbers:\n");
scanf("%d%d", &a, &b);
c = a-b;
printf("the value of c is:%d", c);
return 0; */

/* int i;
printf("Hex(upper case)\tHex(lower case)\tDecimal)\n");
for(i =0; i<16; i++)
printf("%X\t\t%x\t\t%i\n", i, i, i);
return 0; */

/* int k = 100;
 do {
  printf("%c", k);
  k++;
 } while ( k =100);
 return 0; */

 /* int i, j;

 for(i=0, j=1; i<8, j<=8; i++, j++) {
  printf("%i + %i = %i\n", i, j, i+j);
 }

 for(i=0, j=1; i<8; i++, j++); {
  printf("%i + %i = %i\n", i, j, i+j);
 }

 return 0; */

 /* int ch =' ';
 printf("enter a letter ");
 while (ch != 'k'){
 ch = getchar();
 putchar(10);
 putchar(ch);}
 printf("\nout of the loop");
 return 0;

  */

 /* int fan = 6;
  printf("the size of fan is:%d", sizeof(int));
*/
// int i = 7;
//printf("%b", i);
/*int decimalValue;
    printf("Enter decimal value: ");
    scanf("%d", &decimalValue);
    printf("Binary value: ");
    decimalToBinary(decimalValue);*/

int count1, count2;
int decimal = 998887;
    count1 = printHex(decimal);
count2 = printf("\n%X\n", 998887);
printf("count1 is:%d", count1);
printf("count2 is:%d", count2);
return 0;

 /*int count;
 count = printInt(-179);
 printf("total count is: %d\n", count);
 printInt(-988);
return 0;*/

}