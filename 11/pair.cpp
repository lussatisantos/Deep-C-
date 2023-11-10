# include <iostream>
# include <utility>

using namespace std;

int main(){
	
	//pair <int, string> par(20, "Lussati");
	pair <int, string> par;
	
	par.first = 20;
	par.second="Lussati";
	
	cout << par.first << " - " << par.second << endl;
		
	return 0;
}
