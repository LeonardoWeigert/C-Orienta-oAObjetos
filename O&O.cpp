/* implemente um sistema onde o usuario entre com 5 valores
 e diga quantos deles sao repetidos e suas posicoes */

#include <iostream>

using namespace std;

class Vetores{

    int j;
    int i;
    int n;

    public:
        Vetor(int vet[5]);
};

int Vetores::Vetor(int vet[5]){
    
	for (i=0;i<5;i++){

        cout << "Digite o valor da posicao : " << i << endl;
        cin >> vet[i];

}
for (i=0;i<5;i++){
    for (j=i;j<5;j++){
            if(vet[i] == vet[j]){
            if(i != j){
    cout << "O valor repetido eh " << vet[i] <<  " e estao nas posicaos " << i << " e " << j << endl;
        break;
                }
            }
        }
    }
}

int main(){

    int vet[5];

    Vetores Posi;
    Posi.Vetor(vet);
}
