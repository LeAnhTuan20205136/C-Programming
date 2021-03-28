/* Write an algorithm for choosing clothes
to wear for different activities involving
different weather conditions (e.g., going
to the beach when it is hot, skiing in the
snow, etc.). The algorithm should make
it clear how the choice of clothes
depends on the weather and the activity,
and should be able to cope with a range of
weather conditions. */

#include<iostream>

using namespace std;

int main() {
    string name;
    int thoitiet, hoatdong;
    cout << "Nhap ten cua ban : " << endl;
    cin >> name;
    cout << "Chao " << name << "! Hay chon 1 trong 2 dang thoi tiet 1. hot va 2. snow : " << endl;
    cin >> thoitiet;
    cout << "Hay chon 1 trong 2 hoat dong 1. going to the beach va 2. skiing : " << endl;
    cin >> hoatdong;
    switch (thoitiet) {
        
        case 1 : {
            if (hoatdong == 1) {
                cout << "Hay mac do boi"; 
            }
            else cout << "Khong co tuyet";
            break;
        }
       
        case 2 : {
            if (hoatdong == 1){
                cout << "Ban khong nen di boi";
            }
            else cout << "mac do am va mang van truot";
            break;
        }
        
        default : {
            cout << "Khong hop le, vui long nhap lai!";
        }
    }
}