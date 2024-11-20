  /* Nhap vao 3 so a,b,c. Giai phuong trinh bac hai co dang: ax^2 + bx + c */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	
	cout << "Nhap he so a: ";
	cin >> a;
	cout << "Nhap he so b: ";
	cin >> b;
	cout << "Nhap he so c: ";
	cin >> c;
	
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "Phuong trinh vo so nghiem.\n";
			}else{
				cout << "Phuong trinh vo nghiem.\n";
			}
		}else{
			cout << "Phuong trinh co nghiem duy nhat x = " << -c / b << endl;
		}
	}else{
		float delta = b*b - 4*a*c;
		if(delta > 0){
			float x1 = (-b + sqrt(delta)) / (2*a);
			float x2 = (-b - sqrt(delta)) / (2*a);
			cout << "\nPhuong tirnh co 2 nghiem phan biet:\n";
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl; 
		}else if(delta == 0){
			float x = -b / (2*a); 
			cout << "Phuong trin co nghiem kep x = " << x << endl; 
		}else{
			cout << "Phuong rinh vo nghiem.\n" << endl;
		} 
	}
	return 0;
}
  
