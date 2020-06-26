#include <iostream>
using namespace std;

int main() {
	int row = 6, col = 6;

	for(int i=1; i<=row; i++) {
		for(int k=i; k<=col; k++)  {  // spacing
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(i == row)
				cout<<"* ";
			else {
			
			if(j==1 || j == i)
				cout<<"* ";
			else 
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
