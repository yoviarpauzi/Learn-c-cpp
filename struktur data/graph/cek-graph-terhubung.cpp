#include <iostream>
using namespace std;
int main(){
    int n, a, asal, tujuan, b = 0, c = 0;
    cout << "Inputkan banyaknya simpul : ";
    cin >> n;
    cout << "Inputkan banyaknya edge : ";
    cin >> a;
    int graph[n][n] = {0};
    for(int i = 0; i < a; i++){
        cout << "Inputkan simpul asal : ";
        cin >> asal;
        cout << "Inputkan simpul tujuan : ";
        cin >> tujuan;
        asal--;
        tujuan--;
        graph[asal][tujuan] = 1;
        graph[tujuan][asal] = 1;
    }
    int i = 0, j = 0;
    while(i < n){
        b = 0;
        while(j < n){
            if(graph[i][j] == 1){
                b++;
            }
            j++;
        }
        if(i != 0 && i != n - 1){
            if(b < 2){
                c = 1;
                break;
            }
        }
        i++;
    }
    if(c == 1){
        cout << "Graph tidak terhubung" << endl;
    }else{
        cout << "Graph terhubung" << endl;
    }
    return 0;
}