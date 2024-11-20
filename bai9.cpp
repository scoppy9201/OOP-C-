// Viet chuong trình nhap vào mot so nguyên duong n tu bàn phím. Tính tong cac chu so tao nen so do
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
