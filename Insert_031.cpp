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

void insertionsort() {

    int temp;
    int j;

    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)

        {
            arr[j + 1] = arr[j];
            j--;
        }


        arr[j + 1] = temp;
        cout << "\nStop" << i << ":";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}

void display() {
    cout << endl;
    cout << "==================================" << endl; 
    cout << " Elemen Array yang telah tersusun " << endl;
    cout << "==================================" << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    insertionsort();
    display();
}