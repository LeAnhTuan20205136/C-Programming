/* Suppose that you have been given a
$100 music store gift voucher. Write
an algorithm for buying some CDs
with the voucher.*/

#include<iostream>

using namespace std;

int main() {
    
    int voucher = 100;
    int CD, sl1, th1 = 0, sl2, th2 = 0, sl3, th3 = 0;
    
    cout << "Cua hang CD: " << endl << "1. CD ve Idols (10$)" << endl;
    cout << "2. CD ve tieng Nhat (15$)" << endl << "3. CD ve C Programming (25$)" << endl;
    
    while (voucher > 0 && CD != 0) {
        cout << "Nhap so thu tu loai CD muon mua (nhap 0 de ket thuc phien mua hang): ";
        cin >> CD;
        switch (CD) {
        
        case 0 : {
            cout << "Cam on quy khach!!" << endl;
            break;
        }
        
        case 1 : {
            cout << "Nhap so luong muon mua: " << endl;
            cin >> sl1;
            th1 = th1 + sl1;
            if((sl1 * 10) > voucher){
                cout << "Vuot qua so tien hien co, khong thuc hien duoc giao dich!" << endl;
            }
            else {
                voucher = voucher - (sl1 * 10);
                cout << "So tien hien tai con : " << voucher << endl;
            break;
        }
        }
         case 2 : {
            cout << "Nhap so luong muon mua: " << endl;
            cin >> sl2;
            th2 = th2 + sl2;
            if((sl2 * 15) > voucher){
                cout << "Vuot qua so tien hien co, khong thuc hien duoc giao dich!" << endl;
            }
            else {
                voucher = voucher - (sl2 * 15);
                cout << "So tien hien tai con : " << voucher << endl;
            break;
        }
        }
        case 3 : {
            cout << "Nhap so luong muon mua: " << endl;
            cin >> sl3;
            th3 = th3 + sl3;
            if((sl3 * 25) > voucher){
                cout << "Vuot qua so tien hien co, khong thuc hien duoc giao dich!" << endl;
            }
            else {
                voucher = voucher - (sl3 * 25);
                cout << "So tien hien tai con : " << voucher << endl;
            break;
        }
        }
        default : {
            cout << "Khong hop le, vui long nhap lai!" << endl;
            break;
        }
        }
    }
    
    if(CD == 0 || voucher == 0) {
    cout << "Tong so hang mua la: " << endl;
    cout << "1. CD ve Idols : " << th1 << endl;
    cout << "1. CD ve tieng Nhat : " << th2 << endl;
    cout << "1. CD ve C Programming : " << th3 << endl;
    cout << "Tong tien da thanh toan: " << 100 - voucher << endl;
    cout << "Tien du: " << voucher;
    }
    
    return 0;
}