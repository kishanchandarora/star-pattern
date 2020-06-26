#include <iostream>
using namespace std;

int main() {
	int row = 6, col = 6;

	for(int i=1; i<=row; i++) {
		for(int k=1; k<=i; k++)  {  // spacing
			cout<<" ";
		}
		for(int j=i; j<=col; j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
