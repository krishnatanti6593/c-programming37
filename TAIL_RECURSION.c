#include<stdio.h>
int print(int a){
    if(a<1){
        return;
    }
    else{
        printf("%d",a);
        print(a/2);
    }
}
int main(){
    int n=10;
    print(n);
}