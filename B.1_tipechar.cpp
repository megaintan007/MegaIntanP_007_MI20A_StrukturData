#include <iostream>
using namespace std;

int main(){
	cout << "Program Array Membalikkan Huruf" << endl;
	cout << "-------------------------------" << endl;
	char a[6] = {'p', 'e', 'n', 's', 'i', 't'};
	int i, j;
	
	cout<<"\n";
	cout << " Kata sebelum dibalik : ";
	for (i=0; i<6; i++){
		cout << a [i];	
	}
	cout << "\n\n";
	cout << " kata setelah dibalik : ";
	for (j=6; j>=0; j--){
		cout << a [j];
	}
	cout<<"\n";
	return 0;
}
