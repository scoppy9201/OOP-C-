/* Viet chuong trinh giai huong trinh bac nhat mot an ax + b = 0, trong dó a và b la cac sonhap tu ban phim */
#include <iostream>
using namespace std;
int main()
{
	float a, b;
	
	cout << "Nhap he so a: ";
	cin >> a;
	cout << "Nhap he so b: ";
	cin >> b;
	
	if(a == 0){
		if(b == 0){
			cout << "Phung trinh vo so nghiem.\n";
		}else{
			cout << "Phuong trinh vo nghiem.\n"; 
		} 
	}else{
		float x = -b / a;
		cout << "Phuong trinh co nghiem duy nhat x = " << x << endl; 
	} 
	return 0; 
}

