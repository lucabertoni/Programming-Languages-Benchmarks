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

int isNumeroPrimo(int nNumero){
	int i,nRet;

	nRet = 0;

	for(i = 2; i<nNumero; i++)
		if(nNumero%i == 0)
			return nRet;

	nRet = 1;
	return nRet;
}

int* getNumeriPrimi(int nStart,int nFine){
	int *aNumeriPrimi = malloc((nFine-nStart) * sizeof(int));
	int nNumero,nCount;

	nCount = 0;

	for(nNumero = nStart; nNumero<=nFine; nNumero++)
		if(isNumeroPrimo(nNumero))
			aNumeriPrimi[nCount++] = nNumero;

	return aNumeriPrimi;
}