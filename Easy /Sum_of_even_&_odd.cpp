#include<iostream>
using namespace std;

int main() {
	
	int n, d, even = 0, odd = 0; 
    cin >> n;

    while (n > 0) {
        d = n % 10;

        if (d % 2 == 0) {
            even += d;
        } else {
            odd += d;
        }

        n = n / 10;
    }

    cout << even << " " << odd << endl;
	
}
