#include <stdio.h>
#include <string.h>

#define SIZE 101
// TODO - ADD RETURN TYPE TO THIS FUNCTION PROTOTYPE
caesarCipher(char sentence[], int count);

// Follow instructions throughout code below
// <student name>
int main() {
    char sentence[SIZE] = {'\0'};
    char enter = '\0';
    int shiftCount = 0;

    // TODO - validate the shift count
    // (loop over next 2 lines until valid input received)
    printf("Please enter shift count: ( 1 to 25 ) or (-1 to -25): ");
    scanf("%d%c", &shiftCount,&enter);

    printf("Enter a word or sentence up to 100 characters to encrypt: \n");
    fgets(sentence, SIZE, stdin);
    // TODO - Call function to encrypt
    printf("Encrypted text: %s", sentence);
    // TODO - Call function to decrypt
    printf("Decrypted text: %s", sentence);

    return 0;
}

// TODO - Add return type and complete this function to handle text shift
// handles encrypt and decrypt; str->cc(1)->ciphertext->cc(-1)->str
// treat characters as their int ascii values to shift
// example: int charAsIntVal = str[i];
// (a char can be treated as an int)
caesarCipher(char str[], int count){
    //TODO  - add stuff here
}
