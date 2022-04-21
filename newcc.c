#include<stdio.h>

int main()
{
    unsigned int i = 1;
    char* c = (char*)&i;
    if(*c){
        printf("little endian.");
    } 
    else{
        printf("big endian.");
    }
    getchar();
    return 0;
}