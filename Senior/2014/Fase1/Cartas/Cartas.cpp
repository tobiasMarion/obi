//Bibliotecas
#include <iostream>
#include <sstream>
#include <vector>

//
using namespace std;

int main()
{   
    string str;
    vector<int> cartas;

    cout << "Insira o valor da cartas na sequencia desejada(separadas por espaço): " << endl;
    getline(cin, str, '\n'); //Comando para ler a linha inteira, incluindo espaços
    
    stringstream ss(str); //Objeto do tipo stream

    while(ss >> str) // Extraindo as substrings do objeto ss, e transformando em um vetor de inteiros
    {   
        cartas.push_back(stoi(str));
    }
    
    if (cartas[0] < cartas[1]) // Verifica a ordenação das cartas
    {
        for (int i = 1; i < cartas.size(); i++)
        {   
            if (cartas[i - 1] > cartas[i])
            {
                cout << "N" << endl;
                return 0;
            }
        }
        cout << "C" << endl;
        return 0;
    }
    else
    {
        for (int i = 1; i < cartas.size(); i++)
        {
            if (cartas[i - 1] < cartas[i])
            {
                cout << "N" << endl;
                return 0;
            }
        }
        cout << "D" << endl;
        return 0;
    }
}
