// Viet chong trinh liet ke tat ca cac so nguyen to nho hon n cho truoc
#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Cac so nguyen to nho hon " << n << " la: ";
	 
	for(int num = 2; num < n; num++){
		int nguyento = 1;
		for(int i = 2; i*i <= num; i++){
			if(num % i == 0){
				nguyento = 0;
				break;
			}
		}
		if(nguyento){
			cout << " " << num;
		}
	}
	return 0;
}
