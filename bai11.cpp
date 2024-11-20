// Viet chung trinh phan tich mot so nguyen thanh cac thua so nguyen to. 
#include <iostream>
using namespace std;
int main()
{
	int num;
	
	cout << "Nhap mot so nguyen: ";
	cin >> num;
	
	cout << "Cac thua so nguyen to cua " << num << " la: ";
	
	while(num % 2 == 0)
	{
		cout << " 2";
		num /= 2;
	}
	
	for(int i = 3; i*i <= num; i+= 2)
	{
		if(num % i == 0)
		{
			cout << i << " ";
			num /= i;
		}
	}
	
	if(num > 2)
	{
		cout << " " << num;
	}
	
	return 0;
}
