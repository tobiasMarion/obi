//Bibliotecas
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    string str;
    vector<int> n;
    vector<int> casas;
    
    cout << "Insira o respectivamente o numero de casas e encomendas: " << endl;
    getline(cin, str);
    n = split(str);
    cout << "Insira a sequencia do numero das casas: " << endl;
    getline(cin, str);
    casas 



    return 0;
}
vector<int> split(string){
    vector<int> x;
    string str;

    stringstream ss(string);

    while(ss >> str){
        vector.push_back(stoi(str));
    }
    return x;
}