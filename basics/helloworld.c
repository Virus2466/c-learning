#include<stdio.h>


int addNumbers(int x , int y){
    return x + y;
}

void printHello(){
    printf("Hello , World\n");
}

// argc and argv are command line arguments
int main(int argc , char *argv[]) 

{

    printHello();

    printf("The addition is %d \n" , addNumbers(3,5));

    return 0;
}