# include <iostream>
# include <map>

using namespace std;

int main(){
	
	map<int, string>prod;
	
	prod[0] = "mouse";
	prod[1] = "teclado";
	prod[2] = "monitor";
	prod[3] = "caixa de som";
	
	for(auto it:prod){
		cout << it.first << " "<< it.second << endl;
	}
	
	return 0;
}
