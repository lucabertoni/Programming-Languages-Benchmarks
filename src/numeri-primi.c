/*
	Cosa fa			:			Calcola i numeri primi a n a M (1 - 10000)
								e salva il tempo di esecuzione del calcolo
								all'interno del file "cronometro.csv"
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int* getNumeriPrimi(int nStart,int nFine);
int isNumeroPrimo(int nNumero);

void main(){
	clock_t nStart, nEnd;
	float nSecondiTotali;
	int *aNumeriPrimi;
	FILE *pFileCronometro;

	nStart = clock();

	aNumeriPrimi = getNumeriPrimi(1,10000);

	nEnd = clock();
	
	nSecondiTotali = (float)(nEnd - nStart) / CLOCKS_PER_SEC;

	pFileCronometro = fopen("cronometro.csv","a");

	fprintf(pFileCronometro, "C;%f\n", nSecondiTotali);

	fclose(pFileCronometro);
}

// Cosa fa			:			Verifica se un numero è primo
// Ritorna			:			nRet -> intero, 1 se è primo, altrimenti 0
int isNumeroPrimo(int nNumero){
	int i,nRet;

	nRet = 0;

	// Un numero è primo quando è divisibile solo per 1 e per se stesso
	for(i = 2; i<nNumero; i++)
		// Se il numero risulta divisibile per un numero che non sia 1 o se stesso ...
		if(nNumero%i == 0)
			return nRet;	// ... Ritorno 0

	nRet = 1;
	return nRet;
}

// Cosa fa			:			Calcola i numeri primi compresi tra nStart e nFine
// nStart			:			intero, numero del punto di inizio
// nFine			:			intero, numero del punto di fine
// Ritorna			:			aNumeriPrimi -> array, coniene la lista di tutti i numeri primi estratti
int* getNumeriPrimi(int nStart,int nFine){
	// Alloco la memoria necessaria per contenere la lista dei numeri primi
	int *aNumeriPrimi = malloc((nFine-nStart) * sizeof(int));
	int nNumero,nCount;

	nCount = 0;

	for(nNumero = nStart; nNumero<=nFine; nNumero++)
		if(isNumeroPrimo(nNumero))
			aNumeriPrimi[nCount++] = nNumero;

	return aNumeriPrimi;
}