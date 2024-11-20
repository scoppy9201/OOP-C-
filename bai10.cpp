// Viet chuong trinh tim uoc so chung lon nhat va boi so chung nho nhat cua 2 so a va b
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	
	int so_a = a;
	int so_b = b;
	
	while(b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	
	int uocab = so_a;
	int boiab = (so_a * so_b) / uocab;
	
	cout << "Uoc chung lon nhat cua " << so_a << " va " << so_b << " la: " << uocab << endl;
	cout << "Boi so chung nho nhat cua " << so_a << " va " << so_b << " la: " << boiab << endl;
	
	return 0;
	
}
