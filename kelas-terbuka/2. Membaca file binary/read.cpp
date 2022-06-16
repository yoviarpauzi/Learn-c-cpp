#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream myFile;
    int hasil;
    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    cout << hasil;
    myFile.close();
    return 0;
}