// Viet chuong tr�nh nhap v�o mot so nguy�n duong n tu b�n ph�m. T�nh tong cac chu so tao nen so do
#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	
	cout << "Nhap so nguyen n: ";
	cin >> n;
	int save = n;
	
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	
	cout << "Tong cac chu so tao nen " << save << " la: " << sum << endl;
	
	return 0;
}
