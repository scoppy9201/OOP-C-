/* Viet chuong trinh nhap chieu dai va chieu rong cua hcn. Tinh chu vi, dien tich hcn . In ket qua len man hinh */
#include <iostream>
using namespace std;
int main()
{
	float d, r; 
	
	cout << "Nhap chieu dai: ";
	cin >> d;
	cout << "Nhap chieu rong: ";
	cin >> r;
	
	double chuvi = 2 * (d + r);
	double dientich = d * r;
	
	cout << "Chu vi hinh chu nhat la: " << chuvi << endl;
	cout << "Dien tich hinh chu nhat la: " << dientich << endl;
	
	return 0;
}
