#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, e ,i;
    float aux, y;
    double a0,a,b0,b;
    scanf("%d", x);
    scanf("%d", e);

    if( x < 1 || e > 16 || e < 1 ){
        printf("Entradas Invalidas\n");
    }

    a0 = 0;
    b0 = x+0.1;
    for(i = 1; i <= 100; i++){
        a = (a0 + b0)/2;
        b = x/a;
        
        b0 = b;
        a0 = a;
        
        aux = a-b;
        aux<0? aux = aux*-1 : aux = aux;
        if(aux <= pow(10,-e) ){
            break;
        } 
    }

    if(i >= 100){
        printf("Nao foi possivel calcular sqrt(%d).\n", x);
    }else{
        y = a;
        printf("A raiz quadrada de %d eh %f, calculada em %d iteracoes.\n", x,y,i);
    }
    

}