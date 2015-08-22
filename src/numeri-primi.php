<?php
/*
	Cosa fa			:			Calcola i numeri primi a n a M (1 - 10000)
								e salva il tempo di esecuzione del calcolo
								all'interno del file "cronometro.csv"
*/

	// Cosa fa			:			Verifica se un numero è primo
	// Ritorna			:			nRet -> intero, 1 se è primo, altrimenti 0
	function isNumeroPrimo($nNumero){
		$nRet = 0;

		// Un numero è primo quando è divisibile solo per 1 e per se stesso
		for($i = 2; $i<$nNumero; $i++)
			// Se il numero risulta divisibile per un numero che non sia 1 o se stesso ...
			if($nNumero%$i == 0)
				return $nRet;	// ... Ritorno 0

		$nRet = 1;
		return $nRet;
	}

	// Cosa fa			:			Calcola i numeri primi compresi tra nStart e nFine
	// nStart			:			intero, numero del punto di inizio
	// nFine			:			intero, numero del punto di fine
	// Ritorna			:			aNumeriPrimi -> array, coniene la lista di tutti i numeri primi estratti
	function getNumeriPrimi($nStart,$nFine){
		$aNumeriPrimi = array();

		$nCount = 0;

		for($nNumero = $nStart; $nNumero<=$nFine; $nNumero++)
			if(isNumeroPrimo($nNumero))
				$aNumeriPrimi[$nCount++] = $nNumero;

		return $aNumeriPrimi;
	}

	$nStart = microtime(true);

	$aNumeriPrimi = getNumeriPrimi(1,10000);

	$nEnd = microtime(true);

	$nSecondiTotali = ($nEnd - $nStart);

	$file = fopen("cronometro.csv", "a");
	$sText = "PHP;".$nSecondiTotali."\n";
	fwrite($file, $sText);
?>