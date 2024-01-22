#include<iostream>
using namespace std;

int main() {	
	char character;
	cin >> character;

	if(isupper(character))
  {
		cout << 1 << endl;
	}
  else if(islower(character))
  {
		cout << 0;
	} 
  else
  {
		cout << -1;
	}
	return 0;
	
}
