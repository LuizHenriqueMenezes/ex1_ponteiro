#include <iostream>

using namespace std;

int main()
{
    int a, b, soma; 
    int *pont1;
    int *pont2; 
    
    cout<<"Digite o valor de A" << endl;
    cin >> a; 
    cout<<"Digite o valor de B" << endl;
    cin >> b; 
    
    pont1 = &a;
    pont2 = &b; 
    
    cout << "endereço de memória A: " << &a << endl; 
    cout << "endereço de memória B: " << &a << endl; 
    cout << "endereço de memória pont1: " << &pont1 << endl;
    cout << "endereço de memória pont2: " << &pont2 << endl;
    
    soma = a + b; 
    
    *pont1 = soma; 
    
    cout << "valor pont1: " << *pont1; 
}


