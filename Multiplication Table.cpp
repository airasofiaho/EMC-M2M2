#include <iostream>
using namespace std;
int main(){

	int num = 0, range = 0, count;
	cout << "Enter an integer: ";
	cin >> num;
	cout << "Enter range: ";
	cin >> range;

	for(count = 1; count <=range; ++count){
		cout << num << " * " << range << " = " << num * count << endl;
	}
	
	system("PAUSE");
}