#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    const int TAM = 5;

    string alunos[TAM];
    float notas1[TAM];
    float notas2[TAM];
    float notas3[TAM];
    float medias[TAM];

    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i];

        cout << "Digite as 3 notas de " << alunos[i] << ": ";
        cin >> notas1[i] >> notas2[i] >> notas3[i];

        medias[i] = calcularMedia(notas1[i], notas2[i], notas3[i]);

        cout << endl;
    }

    cout << "\n";
    cout << left << setw(15) << "ALUNO"
         << setw(8) << "N1"
         << setw(8) << "N2"
         << setw(8) << "N3"
         << setw(10) << "MEDIA"
         << "SITUACAO" << endl;

    cout << "--------------------------------------------------------\n";

    for (int i = 0; i < TAM; i++) {

        cout << left << setw(15) << alunos[i]
             << setw(8) << notas1[i]
             << setw(8) << notas2[i]
             << setw(8) << notas3[i]
             << setw(10) << fixed << setprecision(1) << medias[i];

        if (medias[i] >= 7) {
            cout << "Aprovado";
        } else {
            cout << "Reprovado";
        }

        cout << endl;
    }

    int maiorIndice = 0;

    for (int i = 1; i < TAM; i++) {
        if (medias[i] > medias[maiorIndice]) {
            maiorIndice = i;
        }
    }

    cout << "\nAluno com maior media: "
         << alunos[maiorIndice]
         << " (" << fixed << setprecision(1)
         << medias[maiorIndice] << ")" << endl;

    return 0;
}