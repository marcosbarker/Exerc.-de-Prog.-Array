#include <iostream>//manipulação de fluxo de dados padrão do sistema 
#include <locale> //biblioteca manipulação de diversas convenções culturais do utilizador (nessse codigo para acentuação)
using namespace std;

int pares(int* vet, int n);
int main() {
	setlocale(LC_ALL, ""); //setlocale <locale>
    int n = 20;     
    int vet[n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    cout << "Números pares armazenados no vetor: " << pares(vet,n) << endl;

    return 0;
}

int pares(int* vet, int n){
    int qtdNumPar = 0;

    for (int i = 0; i<n; i++){
    if (vet[i] % 2 == 0){
    qtdNumPar += 1;
     }
    }

    return qtdNumPar;
}
