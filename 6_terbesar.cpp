//Terbesar.cpp 
#include<iostream> 
using namespace std;

int main() 
{ 
    int x,y,maks; 
    cout<<"Masukan sebuah bilangan : "; 
    cin>>x; 
    cout<<"Masukan lagi sebuah bilangan : "; 
    cin>>y; 
    maks = x > y ? x : y; 
    cout<<"Terbesar adalah : "<<maks<<endl; 
}