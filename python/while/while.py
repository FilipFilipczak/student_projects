#komentarz
licznik=0
#pętla while do chwili aż licznik 5<
while licznik<5:
	print("Wartość licznika", licznik)
	licznik=licznik+1
	odpowiedz=input("Czy chcesz kontynuować tak/nie\n")
	if  odpowiedz.lower()=="nie":
		break

print("Koniec programu nigga")
