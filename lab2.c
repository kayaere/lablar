/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    double a, b, sonuc;
    printf("Sayı 1: ");
    scanf("%lf", &a);
    printf("Sayı 2: ");
    scanf("%lf", &b);  
 
    sonuc = a * b;
 
    printf("Sonuç = %.2lf", sonuc);
    
     return 0; }
