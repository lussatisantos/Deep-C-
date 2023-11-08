# include <iostream>
# include <fstream>

using namespace std;

int main() {
	
	fstream arquivo;
	string linha;
	
	arquivo.open("senhas.txt", ios::app);
	
	arquivo << "testando o arquivo txt" << "\n";
	arquivo << "teste realizado com sucesso!" << "\n";
	
	arquivo.close();
	
	arquivo.open("senhas.txt", ios::in);
	
	if(arquivo.is_open()){
		while(getline(arquivo, linha)){
			cout << linha << endl;
		}
	} else {
		cout << "O ficheiro nao foi possivel ser aberto";
	}
	arquivo.close();
	
	return 0;
	
}
