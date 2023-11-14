# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main(){
	
	/*
	int vetor[] = {4, 0, 2, 7, 1, 9};
	int *p;
	size_t tam= sizeof vetor/4;
	p = find(vetor, vetor+tam, 2);
	
	if(p!=vetor+tam){
		cout << "Numeral encontrado: " << *p << endl;
	} else {
		cout << "Numeral NAO encontrado" << endl;
	}
	*/
	
	vector<int>num = {4, 0, 2, 7, 1, 9};
	auto it= find(num.begin(), num.end(), 2);
	
	if(it!=num.end()){
		cout << "Numeral encontrado: " << *it << endl;
	} else {
		cout << "Numeral NAO encontrado" << endl;
	}
	
	return 0;
}
