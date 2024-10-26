#include <iostream> 
using namespace std; 

int main(){ 

    int deret; 
    cout << "Masukan jumlah deret: "; 
    cin >> deret; 
    cout << "Jumlah deretnya adalah:"; 
    cout << endl; 

    while(deret>0){ 
        cout << deret << "  "; 
        deret--;  
    } 
    return 0; 
}