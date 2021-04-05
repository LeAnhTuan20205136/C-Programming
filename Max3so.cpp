#include<iostream>

using namespace std;

int main(){
	int a, b, c, max;
	cout << "Nhap 3 so: ";
	cin >> a >> b >> c;
	(a > b && a > c) ? (max = a) : ((b > c) ? (max = b) : (max =c));
	cout << max;
}
