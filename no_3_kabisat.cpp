#include <iostream>

using namespace std;

int main(){

    int tahun;
    float dibagi_400, dibagi_100, dibagi_4;

    cout << " CEK TAHUN KABISAT " << endl;
    cout << "Masukan tahun: ";
    cin >> tahun;

    dibagi_400 = tahun % 400 == 0;
    dibagi_100 = tahun % 100 == 0;
    dibagi_4 = tahun % 4 == 0;

    if(dibagi_400){
        cout << tahun << " adalah tahun kabisat";

    }else if(dibagi_4 &&! dibagi_100){
        cout << tahun << " adalah tahun kabisat";
    }else{
        cout << tahun << " bukan tahun kabisat";
    }
  return 0;
}
