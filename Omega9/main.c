/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * tipo de triangulo
 */
int main(int argc, char** argv) {

    int x, y, z;
    
    scanf("%d %d %d", &x, &y, &z);
    
    if(x==y && y==z )
        printf("equilátero");
    
    if(x!=y  && y==z)
        printf("isóceles");
    
    if(x==y && x!=z)
        printf("isóceles");
    
    if(x!=y && y!=z && x!=z)
        printf("escaleno");
    
    
    return (EXIT_SUCCESS);
}

