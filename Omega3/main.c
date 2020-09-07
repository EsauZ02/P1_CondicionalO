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
    
    int A,B,C,D,hr,hora1,hora2;
    scanf("%d",&A);
    scanf("%d",&B); 
    scanf("%d",&C);
    scanf("%d",&D);
    hora1=(A*60)+B;
    hora2=(C*60)+D;
    hora1=hora2-hora1;
    if(hora1<0)
        hora1=hora1+1440;
    if((hora1/60)!=0){
        hr=(hora1%60);
        hora1=hora1/60;
    }else {
        hr=hora1;
        hora1=0;
    }
    printf("\n%d\n",hora1);
    printf("%d\n",hr);
    
    return (EXIT_SUCCESS);
}

