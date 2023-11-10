// for-range-declaration
# include <iostream>
# include <vector>

using namespace std;

int main(){
	
	int x[5]{0, 1, 2, 3, 4};
	vector<int>n{00, 10, 20, 30, 40};
	
	const char* nome = "Lussati";
	
	/*
	for(int i=0; i<sizeof(x)/4; i++){
		cout << x[i] << endl;
	}
	*/
	
	for(int i:x){
		cout << i << endl;
	}
	
	for(auto i:n){
		cout << i << endl;
	}
	
	return 0;
}
