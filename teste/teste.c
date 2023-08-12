#include <stdio.h>

int main(int argc,char* argv[]){
    printf(argv[1]);
    int n = 11;
    int n2=0;
    float f1= 1.5;
    double d1 = 1.599999;
    char letra = 'j';

    //double calcula o dobro//

    if(n2){
        printf("O eh verdadeiro\n");
    }
    for (n = 0;n<10; n++){
        printf("%d", n);
    }
    printf("\n");
    n = 0;

    do{
        printf("%d",n);;
        n++
    }
    while(n<10);
    return 0;
}