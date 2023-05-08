#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string str;
    vector<int> cartas;

    cout << "Insira o valor da cartas na sequencia desejada(separadas por espaço): " << endl;
    getline(cin, str, '\n');
    
    stringstream ss(str);

    while(ss >> str)
    {   
        cartas.push_back(stoi(str));
    }
    
    if (cartas[0] < cartas[1])
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
