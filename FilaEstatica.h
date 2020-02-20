/*
*
* Computer Science Section
* Faculdades Doctum de Caratinga
* Caratinga, MG, Brazil
* Feb. 20, 2020
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#ifndef _FILA_ESTATICA_H_INCLUDED_
#define _FILA_ESTATICA_H_INCLUDED_


// Tamanho máximo da fila 
#define MAX 3
#define EMPTY -1

// Definição da Fila
typedef struct fila_estatica Fila;

// Protótipos da fila
Fila *create( );    	    // Criar fila
int front( Fila* );		    // Acessa o item no início da fila
bool is_empty( Fila* );     // Verificar se a fila está vazia
bool is_full( Fila* );      // Verificar se a fila está cheia
bool enqueue( Fila*, int ); // Enfilerar item
bool dequeue( Fila* );  	// Desenfilerar item
void display( Fila* ); 		// Mostra elementos da fila

#endif