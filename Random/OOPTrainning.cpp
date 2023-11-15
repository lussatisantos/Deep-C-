# include <iostream>

using namespace std;

class Escola{
	private:
		int alunos;
		
	public:
		int salas;
		int janelas;
		int portas;
		int professores;
};

class Colegio:public Escola{
	public:
		Colegio(){
			salas = 10;
			janelas = 48;
			portas = 14;
			professores = 70;	
		}
};

int main() {
	
	Colegio c1;
	cout << "Por norma uma Escola ou Colegio deve ter: " << c1.professores << " docentes" << endl;
	
	return 0;
}
