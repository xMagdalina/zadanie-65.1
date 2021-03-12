#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class ulamki{
ifstream plik1;
int liczba, licznik, mianownik;
double wynik;
int wynik1 = 1000;
int minMian =1000;
vector <int> liczby1;
public:
    void znajdz();  
};
void ulamki::znajdz(){     
plik1.open("dane_ulamki.txt");
while(!plik1.eof()){
plik1>>liczba;
liczby1.push_back(liczba);    
} 
for(int i=0;i<liczby1.size();i++){         
wynik=liczby1[i]/liczby1[i+1];
if(wynik<wynik1){
wynik=wynik1;
liczby1[i+1]=mianownik;
if(mianownik<minMian){
mianownik=minMian;
liczby1[i]=licznik;
}
}   
i++;
}
cout<<"Para liczb: "<< licznik<<" i "<<minMian;
}
int main(int argc, char** argv) {
    ulamki u;
    u.znajdz();
    return 0;
}
