# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main(){
	
	vector<int>n{0, 1, 2, 3, 4};
	vector<int>::iterator it;
	
	/*
	for(auto it:n){
		cout << it << endl;
	}
	*/
	
	for_each(n.begin(), n.end(), [](int num){
		num += 10;
		cout << num << endl;
	});
	
	for_each(n.begin(), n.end(), [](int num){
		cout << num << endl;
	});
	
	return 0;
}
