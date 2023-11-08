# include <iostream>
# include <fstream>

using namespace std;

int main() {
	
	fstream arquivo;
	string linha;
	
	arquivo.open("senhas.txt", ios::app);
	
	arquivo << "testando o arquivo txt" << "\n";
	arquivo << "teste realizado com sucesso!" << "\n";
	
	return 0;
	
}
