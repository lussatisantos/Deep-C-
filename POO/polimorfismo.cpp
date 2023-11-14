# include <iostream>

class Carro{
	private:
		int velMax;
		const char* nome;
		
	public:
		int potencia;
		int getVelMax(){
			return this -> velMax;
		}
		const char* getNome(){
			return this -> nome;
		}
		
		// Sobrecarga de metodos [Polimorfismo]
		Carro(){
			velMax = 120;
			potencia = 80;
			nome = "Volvo";
		}
		
		Carro(int pt, const char* no):potencia(pt), nome(no){
			if(pt<100){
				velMax = 120;
			} else if(pt < 200){
			velMax = 220;
			} else {
				velMax = 380;
			}	
		}
		//Fim da sobrecarga
};

using namespace std;

int main(){
	
	Carro c1;
	cout << c1.getNome() << " " << c1.potencia << " " << c1.getVelMax() << endl;
	
	Carro c2(180, "Mercedez");
	cout << c2.getNome() << " " << c2.potencia << " " << c2.getVelMax() << endl;	
	
	Carro c3(300, "Lamborghini");
	cout << c3.getNome() << " " << c3.potencia << " " << c3.getVelMax() << endl;
	
	return 0;
}
