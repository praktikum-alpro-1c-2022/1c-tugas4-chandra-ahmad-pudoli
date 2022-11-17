#include <iostream>

using namespace std;

int main(){
int bilangan;

    cout << "masukan nilai bilangan: ";
    cin >> bilangan;

if(bilangan % 2 == 0){
    cout << bilangan << " adalah bilangan genap ";
}else{
    cout << bilangan << " adalah bilangan ganjil ";

}
    return 0;
}

