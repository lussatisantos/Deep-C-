# include <iostream>
# include <vector>

using namespace std;

int main(){
	
	int x1, x2, x3, x4;
	x1=10;
	x2=12;
	x3=8;
	x4=11;
	
	auto soma = [=]()->int{
		return x1+x2+x3+x4;
	};
	
	/*
		auto maior = [](int n1, int n2) ->int{
			return (n1>n3)?n1:n2;
		};
	
		cout << maior(2, 6) << endl;
	*/
	
	auto maior = [](vector<int>n) ->int{
		auto m= 0;
		for (int x:n){
			m=(m>x)?m:x;
		}
		return m;
	};
	
	cout << ({3, 4, 0, 1, 9, 10, 4, 2, 7}) << endl;
	
	return 0;
}
