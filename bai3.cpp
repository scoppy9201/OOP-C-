/* Nhap vao ban kinh r. Tinh chu vi, dien tich hinh tron, dien tich xung quanh hinh cau. In ra man hinh */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	
	cout << "Nhap vao ban kinh r: ";
	cin >> r;
	
	float chuvi = 2 * M_PI * r;
	float dientich = M_PI * r * r;
	float dientichxungquanh = 4 * M_PI * r * r;
	
	cout << "Chu vi hinh tron la: " << chuvi << endl;
	cout << "Dien tich hinh tron la: " << dientich << endl;
	cout << "Dien tich xung quanh hinh cau la: " << dientichxungquanh << endl;
	
	return 0;
}
