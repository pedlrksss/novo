#include <iostream>

using namespace std;

void Menu();
void Soma();
void Subtracao();
void Divisao();
void Multiplicacao();

int main() {
    Menu();
    return 0;
}

void Menu() {
    system("cls");

    cout << "Qual operacao deseja realizar?" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Divisao" << endl;
    cout << "4 - Multiplicacao" << endl;
    cout << "0 - Sair" << endl;
    cout << "------------------" << endl;
    cout << "Selecione uma opcao: ";

    short res;
    cin >> res;

    switch (res) {
    case 0:
        exit(0);
        break;
    case 1:
        Soma();
        break;
    case 2:
        Subtracao();
        break;
    case 3:
        Divisao();
        break;
    case 4:
        Multiplicacao();
        break;
    default:
        Menu();
        break;
    }
}

void Soma() {
    system("cls");

    cout << "Primeiro valor: ";
    double v1;
    cin >> v1;

    cout << "Segundo valor: ";
    double v2;
    cin >> v2;

    double soma = v1 + v2;

    cout << "Resultado da soma: " << soma << endl;
    system("pause");
    Menu();
}

void Subtracao() {
    system("cls");

    cout << "Primeiro valor: ";
    double v1;
    cin >> v1;

    cout << "Segundo valor: ";
    double v2;
    cin >> v2;

    double subtracao = v1 - v2;

    cout << "Resultado da subtracao: " << subtracao << endl;
    system("pause");
    Menu();
}

void Divisao() {
    system("cls");

    cout << "Primeiro valor: ";
    double v1;
    cin >> v1;

    cout << "Segundo valor: ";
    double v2;
    cin >> v2;

    if (v2 != 0) {
        double divisao = v1 / v2;
        cout << "Resultado da divisao: " << divisao << endl;
    }
    else {
        cout << "Erro: Divisao por zero!" << endl;
    }

    system("pause");
    Menu();
}

void Multiplicacao() {
    system("cls");

    cout << "Primeiro valor: ";
    double v1;
    cin >> v1;

    cout << "Segundo valor: ";
    double v2;
    cin >> v2;

    double multiplicacao = v1 * v2;

    cout << "Resultado da multiplicacao: " << multiplicacao << endl;
    system("pause");
    Menu();
}
