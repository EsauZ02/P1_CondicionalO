/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 5 de septiembre de 2020, 04:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * valor absoluto
 */
int main(int argc, char** argv) {

int v1,v2;
  scanf("%d", &v1);
  scanf("%d", &v2);
  v1=v1+v2;
  if(v1>=0)
    v1=v1;
  else
    v1=-v1;
  printf("%d",v1);
  
    
    return (EXIT_SUCCESS);
}

