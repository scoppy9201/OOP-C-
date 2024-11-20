#include <iostream>
using namespace std;
int main()
{
	cout << "Cac so hoan hao nho hon 100 la: " << endl;
	
	for(int num = 1; num <= 99; num ++){
		int sum = 0;
		for(int i = 1; i <= num/2; i++){
			if(num % i == 0){
				sum += i;
			}
		}
		if(sum == num){
			cout << num << " la so hoan hao." << endl;
		}
	}
	return 0;
}
