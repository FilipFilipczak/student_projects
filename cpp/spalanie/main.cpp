#include <iostream>

using namespace std;

int main(){

int osoby;
float odleglosc;
float spalanie;
float paliwo;
float xpaliwo;
float cenao;
float cena;
int stacja;

cout<<"Jaką odległość przejechano?"<<endl;
cin>>odleglosc;
cout<<"Ile osób?"<<endl;
cin>>osoby;
cout<<"Jakie jest spalanie auta?"<<endl;
cin>>spalanie;
cout<<"Jaka jest cena paliwa za litr"<<endl;
cin>>paliwo;

xpaliwo=odleglosc*spalanie/100;
cout<<"Zużyto "<<xpaliwo<<" litrów paliwa"<<endl;
cena=xpaliwo*paliwo;
cout<<cena<<"zł"<<endl;
cenao=cena/osoby;
cout<<cenao<<"zł na osobę"<<endl;
stacja=xpaliwo/40;
cout<<"Trzeba tankować "<<stacja<<" razy"<<endl<<endl;
return 0;
}
