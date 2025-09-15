#include <iostream>

using namespace std;

int main(){
    int C{0};
    cin >> C;
    
    for (int i=1; i<10; i++){
        cout << C <<" * " << i  << " = " << C*i << endl;
    }
}