# include <iostream>
# include <vector>

using namespace std;

int main() {
	
	vector<string>produtos={"mouse","teclado","monitor","gabinete","caixa de som"};
	vector<string>::iterator it;
	
	it = produtos.begin();
	
	/*
		advance
		next
		prev
	*/
	
	advance(it, 3);
	
	cout << *it << endl;
	cout << *prev(it, 1) << endl;
	cout << *next(it, 1) << endl;
	
	return 0;
}
