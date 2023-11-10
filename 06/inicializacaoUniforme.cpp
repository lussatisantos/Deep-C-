# include <iostream>
# include <vector>
# include <map>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
};

class Veiculo{
	public:
		int tipo;
		string nome;
		
	private:
};

int main() {
	
	int num{10};
	string nome{"Bruno"};
	vector<int>valores{1, 2, 3, 4};
	map<string, string>capitais{{"Luanda", "Benguela", "Lobito", "Huambo"}}
	
	Pessoa p1{"Lussati", 20};
	Pessoa p2("Tiago Paulo", 120);
	
	Veiculo v1{1, "Mercedez"};
	Veiculo v2{2, "Volkswagen"};
	
	cout << num << endl;
	cout << nome << endl;
	
	for (vector<int>::iterator it=valores.begin(); it!=valores.end(); it++){
		cout << *it << endl;
	
	
	for (map<string, string>::iterator it=capitaiss.begin(); it!=capitais.end(); it++){
		cout << it ->first << " - " << it ->second << endl;
	}}
	
	return 0;
}
