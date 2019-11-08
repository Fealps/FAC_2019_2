#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, e ,i;
    float aux, y, parada = 1.0;
    double a0,a,b0,b;
    scanf("%d", &x);
    scanf("%d", &e);
    
    if( x <= 1 || e > 16 || e < 1 ){
        printf("Entradas Invalidas\n");
	return 0;
    }

    for(int j = 0; j < e; j++){
        parada /= 10;
    }

    b0 = 1;    
    while(b0*b0 < x){     
	a0 = b0;
        b0 ++;

    }

	b0 = (b0*b0 == x)? b0+1 : b0;
	printf("%f", b0);
	printf("%f", a0);
    for(i = 1; i <= 100; i++){
        a = (a0 + b0)/2;
        b = x/a;
        
        b0 = b;
        a0 = a;
        
        aux = a-b;
        aux = (aux<0)? aux*-1 : aux;
        if(aux <= parada ){
            break;
        } 
    }

    if(i >= 100){
        printf("Nao foi possivel calcular sqrt(%d).\n", x);
    }else{
        y = a;
        printf("A raiz quadrada de %d eh %.16f, calculada em %d iteracoes.\n", x,y,i);
    }
    

}
