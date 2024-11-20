// viet chuong trinh tim cac so co 3 chu so sao cho tong cua cac chu so cong lai bang 9. In ra man hinh ket qas
#include <iostream>
using namespace std;
int main()
{
	for(int num = 100; num <= 999; num++){
		int a = num / 100;
		int b = (num / 10) % 10;
		int c = num % 10;
		
		int sum = a + b + c;
		
		if(sum == 9){
			cout << num << " co tong cac chu so: " << a << " + " << b << " + " << c << " = " << sum << endl;
		}
	}
	return 0;
}
