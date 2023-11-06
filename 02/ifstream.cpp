# include <iostream>
# include <fstream>

using namespace std;

int main() {
	//ofstream (saida), ifstream (entrada), fstream (full)
	/*
	//OFSTREAM
	ofstream arquivoS;
	
	arquivoS.open("cfbcursos.txt", ios::app);
	
	arquivoS << "CFB Cursos\n";
	arquivoS << "Curso de C++\n";
	arquivoS << "cfbcursos.com.br\n";
	
	arquivoS.close();
	*/
	// IFSTREAM;
	
	ifstream arquivoE;
	string linha;
	
	arquivoE.open("cfbcursos.txt");
	
	if(arquivoE.is_open()){
		while(getline(arquivoE, linha)){
				cout << linha << endl;
		}
		arquivoE.close();
	}else{
		cout << "Nao foi possivel abrir o arquivo";
	}
	
	return 0;
}
