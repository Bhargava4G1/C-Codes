#include <stdio.h>

int main() {
    unsigned int num = 0x01020304; // Hexadecimal value to check endianess
    char *ptr = (char *)&num;
    
    printf("Memory contents: 0x%08X\n", num);
    if (*ptr == 1) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    printf("%x\t",*ptr);
    printf("%p\n",ptr);
    *ptr++;
    printf("%x\t",*ptr);
    printf("%p\n",ptr);
    *ptr++;
    printf("%x\t",*ptr);
    printf("%p\n",ptr);
    *ptr++;
    printf("%x\t",*ptr);
    printf("%p\n",ptr);


    
    return 0;
}
/*

#include <stdio.h>

int main() {
    unsigned int num = 0x01020304; // Hexadecimal value to check endianess
    char *ptr = (char *)&num;
    
    printf("Memory contents: ");
    for (int i = 0; i < sizeof(num); i++) {
        printf("%02X ", (unsigned char)ptr[i]); // Print each byte in hexadecimal format
    }
    printf("\n");
    
    if (*ptr == 1) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    
    return 0;
}
*/