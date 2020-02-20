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

#include "FilaEstatica.h"


// Estrutura da fila
struct fila_estatica{
	int dado[MAX];
	int inicio;
	int fim;
	int tamanho;
};


// Implementações das operações da fila
Fila *create( ){   // Criar fila
	
	Fila *fila = ( Fila* ) calloc( 1, sizeof(Fila) );
	fila->inicio = fila->fim = fila->tamanho = 0;
	printf( "Fila criada com sucesso...\n" );

	return fila;
}

int front( Fila *fila ){
	printf( "Verificando início da fila...\n" );
	if( !is_empty( fila ) )
		return fila->dado[ fila->inicio ]; // se fila vazia retun é -1
	
	return EMPTY;
}

bool is_empty( Fila *fila ){  // Verificar se a fila está vazia
	printf( "Verificando se a fila está vazia...\n" );
	return ( fila->tamanho == 0 );
}


bool is_full( Fila *fila ){   // Verificar se a fila está cheia
	printf( "Verificando se a fila está cheia...\n" );
	return ( fila->tamanho == MAX );
}


bool enqueue( Fila *fila, int item ){ // Enfilerar item
	
	if( !is_full( fila ) ){
		printf( "Enfilerando %d...\n", item );
		fila->dado[ fila->fim ] = item;
		fila->fim = (fila->fim + 1) % 10;
		fila->tamanho++;
		return true;	
	}
	else
		printf( "Fila cheia!\n" );

	return false;
}


bool dequeue( Fila *fila ){  // Desenfileirar item
	if( !is_empty( fila ) ){
		printf( "Desenfilerando %d...\n", fila->dado[fila->inicio] );
		fila->inicio = (fila->inicio + 1) % 10;
		fila->tamanho--;
		return true;
	}
	else
		printf( "Fila vazia!\n" );

	return false;
}

void display( Fila* fila ){
	int i = 0;

	while( !is_empty( fila ) ){
		printf("Número atendimento: %d\n", fila->dado[i]);
		i++;
	}
}
