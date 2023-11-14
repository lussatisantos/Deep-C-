# include <iostream>
# include <memory>

class Carro{
	public:
		int velMax;
		int potencia;
		const char* nome;
	
	Carro(const char* n, int p):nome(n), potencia(p){ //lista de inicializacao
		if(p<100){
			this->velMax=120;
		} else if(p<200){
			this -> velMax=220;
		} else {
			this->velMax = 400;
		}
	}	
	
	private:
		
};

using namespace std;

int main(){
	
	// Carro *c1 = new Carro("Mercedez", 280);
	//cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;
	
	unique_ptr<Carro> c1(new Carro{"Mercedez", 80});
	cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;
	
	Carro c2("Volkswagen", 400);
	cout << c2.nome << " " << c2.potencia << " " << c2.velMax << endl;
	
	//delete c1;
	
	return 0;
}
