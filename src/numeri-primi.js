// Cosa fa			:			Verifica se un numero è primo
// Ritorna			:			nRet -> intero, 1 se è primo, altrimenti 0
function isNumeroPrimo(nNumero){
	var i,nRet;

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
function getNumeriPrimi(nStart,nFine){
	var aNumeriPrimi = [];
	var nNumero,nCount;

	nCount = 0;

	for(nNumero = nStart; nNumero<=nFine; nNumero++)
		if(isNumeroPrimo(nNumero))
			aNumeriPrimi[nCount++] = nNumero;

	return aNumeriPrimi;
}
// Estraggo l'ora d'inizio dell'esecusione del programma
var nStart = new Date().getTime()/1000;

// Calcolo i numeri primi
aNumeriPrimi = getNumeriPrimi(1,10000);

// Estraggo l'ora di fine dell'esecusione del programma
var nEnd = new Date().getTime()/1000;

// Calcolo la durata in secondi del programma
var nSecondiTotali = nEnd - nStart;

document.write("Javascript;"+nSecondiTotali);