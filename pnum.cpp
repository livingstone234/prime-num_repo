#include <iostream>
using namespace std;

int main(){
	
	cout << "Calculating average of prime numbers from 1 to a given number." << endl << endl;
	
	int l;
	cout << "Enter your value: ";
	cin >> l;

	double sum;
	int countPrime;
	
	for(int m=2; m<=l; m++)
  {
		int n;
		for(n=2; n<m; n++){
			if(m%n == 0){
				break;
				}
		}
		if(n == m){
			sum = sum + m;
			countPrime++;
				}
  }
	
	cout << "The number of prime numbers available is: " << countPrime << endl << endl;
	cout << "The sum of the numbers is: " << sum << endl << endl;


	double avg;
	avg = sum/countPrime;
	cout << "The mean is calculated as: " << avg << endl;

return 0;
}