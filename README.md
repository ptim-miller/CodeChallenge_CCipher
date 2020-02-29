# Caesar Cipher Challange #
Complete the function "caesarCipher" from main.c. Also try to validate the user input for shift count. Loop on invalid inputs to allow corrections.    


The following links may be helpful:  
https://cryptii.com/pipes/caesar-cipher  
https://www.asciitable.com/  
https://en.wikipedia.org/wiki/Caesar_cipher  

To get an idea of char to int conversion, test the output of this code:  
int x ='A';  
printf("%d \n", x);  
// compare output to ascii table from link - it will help you build your function!  

Expected outputs:  
(Use the cryptii site in the links provided above to compare to example output.)  

Please enter shift count: ( 1 to 25 ) or (-1 to -25): -4  
Enter a word or sentence up to 100 characters to encrypt:  
Hello world  
Encrypted text: Dahhk sknhz  
Decrypted text: Hello world  

Please enter shift count: ( 1 to 25 ) or (-1 to -25): 4  
Enter a word or sentence up to 100 characters to encrypt:  
Hello world  
Encrypted text: Lipps asvph  
Decrypted text: Hello world  

Please enter shift count: ( 1 to 25 ) or (-1 to -25): 25  
Enter a word or sentence up to 100 characters to encrypt:  
ZZzzAAaa  
Encrypted text: YYyyZZzz  
Decrypted text: ZZzzAAaa  

Please enter shift count: ( 1 to 25 ) or (-1 to -25): -25  
Enter a word or sentence up to 100 characters to encrypt:  
ZZzzAAaa  
Encrypted text: AAaaBBbb  
Decrypted text: ZZzzAAaa  

Validate the shift count input code.  
Example of invalid input (loops on invalid entries):  
Please enter shift count: ( 1 to 25 ) or (-1 to -25): 26  
Please enter shift count: ( 1 to 25 ) or (-1 to -25): 0  
Please enter shift count: ( 1 to 25 ) or (-1 to -25): -26  
Please enter shift count: ( 1 to 25 ) or (-1 to -25):   
