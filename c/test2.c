#include <stdio.h>

int heX(int decimal);
int heX(int decimal) {
    char hex[100];
    int count = 0;
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;

        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder + 'A' - 10;
        }

        i++;
        count++;
        decimal /= 16;
    }

    hex[i] = '\0';

    int j;
    for (j = 0; j < i / 2; j++) {
        char temp = hex[j];
        hex[j] = hex[i - j - 1];
        hex[i - j - 1] = temp;
    }

    return count;
}

int hex(unsigned int num);

int hex(unsigned int num)
  { char *hex;
    int count = 0;
    int digit;
    while (num > 0) {
        digit = num % 16;
        if (digit < 10) {
            hex[count] = digit + '0';
        } else {
            hex[count] = digit + 'a' - 10;
        }
        num /= 16;
        count++;
    }
    // Reverse the hex string
    int i, j;
    char temp;
    for (i = 0, j = count - 1; i < j; i++, j--) {
        temp = hex[i];
        hex[i] = hex[j];
        hex[j] = temp;
    }
    return count;
}

int ToHex(int a);
int ToHex(int a) {
    int count = 0;
    char hex[100];
    int i = 0;

    while (a != 0) {
        int temp = 0;
        temp = a % 16;

        //To convert integer into character
        if (temp < 10) {
            hex[i++] = temp + 48;
        }
        else {
            hex[i++] = temp + 'A' - 10;
        }
        count++;
        a = a / 16;
    }

    //Printing Hexadecimal Number
    printf("Hexadecimal number: ");
    for (int j = i - 1; j >= 0; j--) {
        //printf("%c", hex[j]);
        putchar(hex[j]);
    }

    return count;
}
int octal(int decimalNumber);
/* int octal(int decimalNumber) {
    int remainder, count = 0;
    long int octalNumber = 0, i = 1;

    // convert decimal to octal
    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * i;
        i *= 10;
        decimalNumber /= 8;
        count++;
    }

    return count;

} */int octal(int num) {


     int count = 0;
    char octalNum[100];
    int i = 0;
if (num == 0)
 return putchar('0');
    while (num != 0) {
        octalNum[i] = num % 8;
        num /= 8;
        i++;
        count++;
        
    }
    for (int j = i - 1; j >= 0; j--)
        putchar(octalNum[j] + '0');
    
            return count;
}





int main(){
  //  int a = 99998;
//hex(a);
//ToHex(99998);
int count1, count2;
count1 = octal(98999);
count2 = printf("\n%o\n", 98999);
printf("count1:%d\n", count1);
printf("count2:%d\n", count2);
}