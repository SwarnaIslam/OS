#include<stdio.h>
#include"sqlite3.h"
int main(){
    printf("%d",sqlite3_complete("create /(;"));
    return 0;
}
