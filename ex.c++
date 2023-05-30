/***** 
1-) Desenvolva um programa onde você crie 3 variáveis a, b e soma e dois ponteiros: pont1 e pont2, todos do tipo int.

- Peça para o usuário entrar com o valor de a e b via teclado e faça com que os ponteiros recebam o endereço de memória de a e b.

- Exibir na tela o endereço de memória das variáveis a, b e dos dois ponteiros.

- Some a e b e guarde dentro da variável soma.

- Atribuir o conteúdo de soma para o ponteiro pont1 e exibir o conteúdo do pont1.
******/

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


