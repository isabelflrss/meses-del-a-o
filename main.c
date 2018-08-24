/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 23 de agosto de 2018, 09:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("Hola usario\n podrias ayudarme? deseo practicar mi memoria con los meses\n");
    printf("Vamos dime un numero y te diré a que mes haces referencia");
    int mes;
    scanf("%d",&mes);
    if ((mes>=1)&&(mes<=12)){
    if (mes==1){
        printf("Es el mes de enero, vamos por roscaaaa");
    }
    if (mes==2){
        printf("Febrero, le dicen el mes del amor");
    }
    if (mes==3){
        printf("Marzo");
    }
    if(mes==4){
        printf("Abril");
    }
    if (mes==5){
        printf("Mayo, mes para mamá");
    }
    if (mes==6){
        printf("Junio,vacaioneeees");
    }
    if (mes==7){
        printf("Julio, mes para papá");
    }
    if (mes==8){
        printf("Agosto,clases otra vez");
    }
    if (mes==9){
        printf("Septiembre,mes patrio");
    }
    if (mes==10){
        printf("Octubre, lo mejor esta por venir");
    }
    if (mes==11){
        printf("¡El mejor mes! Noviembre");
    }
    if (mes==12){
        printf("Diciembre, hora de engordar gg");
    }
    }else{
        printf("Ese mes no existe xd");
    }
    printf("\nAdios");
    
    return 0;
}

