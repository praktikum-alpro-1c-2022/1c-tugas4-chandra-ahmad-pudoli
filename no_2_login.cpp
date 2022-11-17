#include <iostream>

using namespace std;

int main(){
    string username, password;

    cout << "=== LOGIN SYSTEM ===\nDefault username,password: admin, admin123" << endl;
    cout << "Masukan username: ";
    cin >> username;
    cout << "Masukan password: ";
    cin >> password;

    if(username == "admin" && password == "admin123"){
        cout << "Login berhasil!";
    }else if (username == "admin" || password == "admin123"){
        if (username == "admin" && password != "admin123"){
            cout << "Username sesuai, password tidak sesuai!";
        }else if(username != "admin" && password == "admin123")
            cout << "Username tidak sesuai, password sesuai!";
    }else{
        cout << "Username dan password tidak sesuai!";
    }
  return 0;
}
