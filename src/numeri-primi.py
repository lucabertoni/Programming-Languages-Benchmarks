#!/usr/bin/python3
"""
	Cosa fa			:			Calcola i numeri primi a n a M (1 - 10000)
								e salva il tempo di esecuzione del calcolo
								all'interno del file "cronometro.csv"
"""

import time
def isNumeroPrimo(nNumero):
	"""
	Cosa fa			:			Verifica se un numero è primo
	Ritorna			:			nRet -> intero, 1 se è primo, altrimenti 0
	"""
	nRet = 0

	# Un numero è primo quando è divisibile solo per 1 e per se stesso
	for i in range(2,nNumero):
		# Se il numero risulta divisibile per un numero che non sia 1 o se stesso ...
		if(nNumero%i == 0):
			return nRet	# ... Ritorno 0

	nRet = 1
	return nRet

def getNumeriPrimi(nInizio,nFine):
	"""
	Cosa fa			:			Calcola i numeri primi compresi tra nInizio e nFine
	nInizio			:			intero, numero del punto di inizio
	nFine			:			intero, numero del punto di fine
	Ritorna			:			aNumeriPrimi -> array, coniene la lista di tutti i numeri primi estratti
	"""
	aNumeriPrimi = []

	for nNumero in range(nInizio,nFine+1):
		if(isNumeroPrimo(nNumero)):
			aNumeriPrimi.append(nNumero)

	return aNumeriPrimi

# Estraggo l'ora d'inizio dell'esecusione del programma
nStart = time.time()

# Calcolo i numeri primi
aNumeriPrimi = getNumeriPrimi(1,10000)

# Estraggo l'ora di fine dell'esecusione del programma
nEnd = time.time()

# Calcolo la durata in secondi del programma
nSecondiTotali = nEnd - nStart

# Salvo la duranta nel file csv
oFile = open("cronometro.csv","a")
oFile.write("Python3;%s\n" % nSecondiTotali)
oFile.close()