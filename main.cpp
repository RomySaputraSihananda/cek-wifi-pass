#include <iostream>
#include <string>

using namespace std;
string ssid, opsi;
void pass();

int main(){
    system("cls");
    while (true){
        awal :
        cout << "opsi : \n" <<endl;
        cout << "1. CEK IP" <<endl;
        cout << "2. DAFTAR WIFI" <<endl;
        cout << "3. CEK PASSWORD" <<endl;

        cout << "\nmassukan opsi : ";
        getline(cin, opsi);


        if(opsi == "1"){
            system("ipconfig");
            goto awal;
        }else if(opsi == "2"){
            system("netsh wlan show profiles");
            goto awal;
        }else if(opsi == "3"){
            pass();
            goto awal;
        }else{
            cout << "opsi salah" <<endl;
            goto awal;
        }

    }
    return 0;
}

void pass(){
    cout << "\nmassukan ssid : ";
    getline(cin, ssid);

    ssid = "netsh wlan show profiles " + ssid + " key=clear";
    const char *cmd = ssid.c_str();

    system(cmd);
}
