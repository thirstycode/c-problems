#include<stdio.h>

#include<string.h>

 

int digit(char);

 void decimal2roman(int num){
    int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}; //base values
    char *symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  //roman symbols
    int i = 0;
 
    while(num){ //repeat process until num is not 0
        while(num/decimal[i]){  //first base value that divides num is largest base value
            printf("%s",symbol[i]);    //print roman symbol equivalent to largest base value
            num -= decimal[i];  //subtract largest base value from num
        }
        i++;    //move to next base value to divide num
    }
}

int main(){

 

    char roman_Number[1000];

    int i=0;

    long int number =0;

 

    printf("Enter FIRST roman number (Valid digits are I, V, X, L, C, D, M):  \n");

    scanf("%s",roman_Number);

 

    while(roman_Number[i]){

 

         if(digit(roman_Number[i]) < 0){

             printf("Invalid roman digit : %c",roman_Number[i]);

             return 0;

         }

 

         if((strlen(roman_Number) -i) > 2){

             if(digit(roman_Number[i]) < digit(roman_Number[i+2])){

                 printf("Invalid roman number");

                 return 0;

             }

         }

 

         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))

             number = number + digit(roman_Number[i]);

         else{

             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));

             i++;

         }

         i++;

    }
	int number1= number;
 
//	2ND NUMBER
    printf("Enter SECOND roman number (Valid digits are I, V, X, L, C, D, M):  \n");

    scanf("%s",roman_Number);

 

    while(roman_Number[i]){

 

         if(digit(roman_Number[i]) < 0){

             printf("Invalid roman digit : %c",roman_Number[i]);

             return 0;

         }

 

         if((strlen(roman_Number) -i) > 2){

             if(digit(roman_Number[i]) < digit(roman_Number[i+2])){

                 printf("Invalid roman number");

                 return 0;

             }

         }

 

         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))

             number = number + digit(roman_Number[i]);

         else{

             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));

             i++;

         }

         i++;

    }
    int number2= number;
    int answer = number1+number2;
        printf("Its answer value is : ");
	decimal2roman(answer);
 

    return 0;

 

}

 

int digit(char c){

 

    int value=0;

 

    switch(c){

         case 'I': value = 1; break;

         case 'V': value = 5; break;

         case 'X': value = 10; break;

         case 'L': value = 50; break;

         case 'C': value = 100; break;

         case 'D': value = 500; break;

         case 'M': value = 1000; break;

         case '\0': value = 0; break;

         default: value = -1; 

    }

 

    return value;

}
