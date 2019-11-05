#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, e;
    float aux;
    double a0,a,b0,b;
    cin >> x;
    cin >> e;
    a0 = 0;
    b0 = x+0.1;
    for(int i = 1; i <= 100; i++){
        a = (a0 + b0)/2;
        b = x/a;
        
        b0 = b;
        a0 = a;
        
        
        aux = a-b;
        aux<0? aux = aux*-1 : aux = aux;
        if(aux <= pow(10,-e) ){
           cout << "i : "<< i << " ";
            break;
        } 
    }
    cout << "sqtr(" << x <<") = "<< a<< endl;

}