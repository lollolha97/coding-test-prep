#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T, A, B;
    cin >> T;
    vector <int> vect;
    
    for (int i=0; i<T; i++)
    {
        cin >> A >> B;
        vect.push_back(A+B);
    }
    
    for (int i=0; i<T; i++)
    {
        cout << vect[i]<<"\n";
    }
    
}