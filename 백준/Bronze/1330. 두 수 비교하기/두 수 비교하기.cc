#include <iostream>
#include <string>

using namespace std;

string isA(int A,int B){
    cin >> A >> B;
    if(A>B) return ">";
    else if(A==B) return "==";
    else return "<";
}

int main(){
    int A{1};
    int B{2};
    cout << isA(A,B);
}