/* Viet chuong trinh nhap 1 so n tu bàn phím. Hãy kiem tra xem n co phai so nguyen to hay khong */
#include <iostream>
using namespace std;
int main(){
	
	int n;
	bool nguyento = true;
	cout << "Nhap mot so nguyen n: ";
	cin >> n;
	
	if(n < 2 ){
		nguyento = false;
	}else{
		for(int i = 2; i < n; i++){
			if(i % n == 0){
				nguyento = false;
				break;
			}
		}
	}
	if(nguyento){
		cout << n << " la so nguyen to." << endl;
	}else{
		cout << n << " khong la so nguyen to." << endl;
	}
	
	return 0;
}
