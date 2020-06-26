#include <iostream>
using namespace std;

int main() {
	int row = 6, col = 6;
	for(int i=1; i<=row; i++) {
		for(int j=i; j<=col; j++) {
			if(i==1)
				cout<<"* ";
			else {
				if(j==i || j==col)
					cout<<"* ";
				else 
					cout<<"  ";
			}
		}
		cout<<endl;
	}	
	return 0;
}
