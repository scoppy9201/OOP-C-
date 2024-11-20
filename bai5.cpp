/* Viet chuong trinh nhap vao thong tin cua sinh vien gom: masv, hoten, diemtoan, diemvan, diemanh
- Tinh trung binh cong diem
- In thong tin sinh vien len man hinh */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string masv, hoten;
	float diemtoan, diemvan, diemanh;
	
	cout << "Nhap ma sinh vien: " << masv;
	getline (cin, masv);
	cout << "Nhap ho ten sinh vien: " << hoten;
	getline (cin, hoten);
	
	cout << "Nhap diem toan: ";
	cin >> diemtoan;
	cout << "Nhap diem van: ";
	cin >> diemvan;
	cout << "Nhap diem teng anh: ";
	cin >> diemanh;
	
	double dtb = (diemtoan + diemvan + diemanh) / 3;
	
	cout << "\nThong tin sinh vien:\n";
	cout << "Ma sinh vien: " << masv << endl;
	cout << "Ho ten: " << hoten << endl;
	cout << "Diem trung binh cua sinh vien: " << dtb << endl;
	
	return 0;
}
