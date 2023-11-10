#include <iostream>

using namespace std;

void impNum();

int num{90};
extern int valor;

int main() {
	
	impNum();
	cout << valor << endl; 
	
	return 0;
}
