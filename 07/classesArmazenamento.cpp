# include <iostream>
# include <vector>

using namespace std;

void somador(){
	static auto i=0;
	i++;
	
	cout << i endl;
}

int main() {
	
	somador();
	somador();
	somador();
	
	register int cont;
	
	for(cont=0; cont<=10; cont++){
		cout << cont << endl;
	}
	
	auto num=10;
	auto nome="Bruno";
	auto valor=10.4;
	
	vector<int>v{10,20,30,40};
	
	for(auto it=v.begin(); it!=v.end(); it++){
		cout << *it << endl;
	}
	
	return 0;
}
