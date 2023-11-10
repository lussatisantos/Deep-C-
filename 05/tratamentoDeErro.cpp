# include <iostream>
# include <stdexcept>

using namespace std;

double divide(double, double);

int main() {
	
	double n1, n2;
	
	cin >> n1 >> n2;
	
	try{
		cout << divide(n1,n2)<< endl;
		
	}catch(const char* e){
		cout << "Erro: " << e << endl;
	}
	
	return 0;
}

double divide(double n1, double n2){
	if (n2==0) {
		throw "Erro de divisao por ZERO";
	}
	if(n1>9){
		throw "N1 precisa ser menor que 10";
	}
	return n1/n2;
}
