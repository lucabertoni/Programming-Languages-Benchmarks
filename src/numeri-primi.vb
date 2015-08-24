Module Module1

    Function isNumeroPrimo(ByVal nNumero As Integer)
        Dim nRet As Integer
        Dim i As Integer

        nRet = 0
        For i = 2 To nNumero - 1
            If (nNumero Mod i) = 0 Then
                Return nRet
            End If
        Next
        nRet = 1
        Return nRet

    End Function
    Function getNumeriPrimi(ByVal nStart As Integer, nFine As Integer)
        Dim nCount, nNumero As Integer
        Dim aNumeriPrimi(10000) As Integer
        nCount = 1
        For nNumero = nStart To nFine
            If isNumeroPrimo(nNumero) Then
                aNumeriPrimi(nCount) = nNumero
                nCount = nCount + 1

            End If
        Next
        Return aNumeriPrimi
    End Function
    Sub Main()
        Dim nStart, nEnd, nSecondiTotali As Double
        Dim sText As String
        Dim aNumeriPrimi(10000) As Integer
        nStart = Timer
        aNumeriPrimi = getNumeriPrimi(1, 10000)
        nEnd = Timer
        nSecondiTotali = (nEnd - nStart)
        sText = ("VisualBasic;" & nSecondiTotali & vbCrLf)
        My.Computer.FileSystem.WriteAllText("contatore.csv", sText, True)
    End Sub

End Module
