/* Viet chuog trih nhap vao mot so nguyen duong n (n <= 100). Tính và hien thi tog cac so tunhien le tu 1 den n.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int S = 0;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
    	if(i % 2 != 0){
    		S += i;
		}
    }
    cout << "Tong S = " << S << endl;

    return 0;

}
