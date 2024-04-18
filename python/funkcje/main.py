def kwadrat(x):
	z=x*x
	return z

def suma (x,y):
	a=x+y
	return a

wynik=kwadrat(2)
wyniks=suma(4,6)
print (wynik)
print (wyniks)

tablica=[1,2,3,4,5]
tablica.append(6)
for element in tablica:
	print(element)

#zbiór niepowtarzających się elementów
zbior={1,2,3,4,5}
zbior.add(6)
zbior.remove(3)
for element in zbior:
	print(element)
