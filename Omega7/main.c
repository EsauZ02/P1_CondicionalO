/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int N;
    
    scanf("%d", &N);
    
    if(N%2==0)
        printf("%d 0",N);
    else if((N+1)%2==0)
        printf("%d 1",N+1);
    else if(N/10<10)
        printf("%d 1",N/10);
    if((N%3)==0)
        printf("%d 1",N+1);
    
    return (EXIT_SUCCESS);
}

