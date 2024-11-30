#include <stdio.h>


int lengthstring(char *a) {
    int length = 0;
    while (*a != '\0') {
        length++;
        a++;
    }
    return length;
}


void reverse(char *a, int size) {
    char *start = a;
    char *end = a + (size - 1);

    while (start < end) {
       
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed first string: %s\n", a);
}


void concatenate(char *str1, char *str2) {
   
    while (*str1 != '\0') {
        str1++;
    }

   
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

   
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

 
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
   
   
   
   
    int len = lengthstring(str1);
    printf("The length of the first string is: %d\n", len);

   
    reverse(str1, len);

   
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);  

    return 0;
}
