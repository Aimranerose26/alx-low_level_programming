#include <stdio.h>
/**
* Entry point :the place where i start my program
*
* Description : writing a program that prints the size of various types on the computer
* 
* Return 0 (Success)
*/
int main(){
printf("the size of a char is :%zu byte(s)\n",sizeof(char));
printf("the size of an int is :%zu byte(s)\n",sizeof(int));
printf("the size of a long int is :%zu byte(s)\n",sizeof(long int));
printf("the size of a long long int is :%zu byte(s)\n",sizeof(long long int));
printf("the size of a float is:%zu byte(s)\n",sizeof(float));
return 0;
}
