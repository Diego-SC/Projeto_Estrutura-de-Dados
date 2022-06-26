//Diego de Souza Camillo e Rhuan Bento Fabiano

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
    ifstream arquivo;
    string leitura;

    vector<string> lab;

    arquivo.open("labirinto.txt");

    while(getline(arquivo, leitura)){
        for(int i = 0; i < leitura.size(); i++){
            if(leitura[i] == '#')
                lab.push_back("-1");
            else if(leitura[i] == '.')
                lab.push_back("0");
        }
    }

    for(int t = 0; t < lab.size(); t++){
        cout << lab[t] << " ";
        cout << endl;
    }

    return 0;
}
