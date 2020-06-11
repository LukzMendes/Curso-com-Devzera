#include<stdio.h>
#include<stdlib.h>
 
int main() {
    float P, H, IMC;
    
    printf("Digite aqui o seu peso:\n");
    scanf("%f", &P);
    
    printf("Digite aqui a sua altura:\n");
    scanf("%f", &H);
    
        IMC = P / (H*H);
        if (IMC < 26){
            printf("O seu IMC e %.2f e esta ok \n", IMC );
            }
            
        if (IMC >=26 &&  IMC<30){
           printf ("O seu IMC e %.2f e voce precisa fazer uma caminhada\n", IMC);
           }
        
        if (IMC >=30){
           printf("O seu IMC e %.2f e voce nao ta bem \n", IMC);
           }
                    system("pause");
                    
    }