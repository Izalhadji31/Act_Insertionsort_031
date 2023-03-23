#include <iostream>
using namespace std;

int arr[20];
int n;

void  input() {

    while (true) {
        cout << "masukan elemen/jumlah data array : \n";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "masukan data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }

}

int main() {
