/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 5 de septiembre de 2020, 05:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int numero1;
    int numero2;
    int numero3;
    

    scanf ("%d %d %d", &numero1, &numero2, &numero3);
    
    if(numero1> numero2 && numero1> numero3) {
        printf("El numero mayor es %d", numero1);
    }else {
        if(numero2> numero3){
            printf("El numero mayor es %d", numero2);
        }else{
            printf("El numero mayor es %d", numero3);
        }
    }
    
    return (EXIT_SUCCESS);
}

