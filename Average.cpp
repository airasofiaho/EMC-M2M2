#include <iostream>
using namespace std;

int main(){
	int N, num[20] = {}, sum=0, average, count;
	
	cout << "Enter the numbers of data: ";
	cin >> N;
	
	while(N > 20 || N<=0){
		cout << "Error! number should in range of (1 to 20)." << endl;
        cout << "Enter the number again: ";
        cin >> N;
	}

	for(count = 0; count < N; ++count)
    {
        cout << count + 1 << ". Enter number: ";
        cin >> num[count];
        sum += num[count];
    }

    average = sum / N;
    cout << "Average = " << average << endl;

	system("PAUSE");
}