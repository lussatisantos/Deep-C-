# include <iostream>
# include <fstream>

using namespace std;

int main() {
	//ofstream (saida), ifstream (entrada), fstream (full)
	
	ofstream arquivo;
	
	arquivo.open("cfbcursos.txt", ios::app);
	
	arquivo << "CFB Cursos\n";
	arquivo << "Curso de C++\n";
	arquivo << "cfbcursos.com.br\n";
	
	arquivo.close();
	
	return 0;
}
