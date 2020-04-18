#include "manager.h"



void listProduct(Product *p[],int count){
   printf("과자정보\n======================================\n");
    for(int i=0;i<count;i++){
        if(p[i]->gram!=0){
            printf("%10s %6d %6d %6d %6d\n",p[i]->name,p[i]->gram,p[i]->price,p[i]->sprice,p[i]->star);
        }
    }
}
int selectDataNo(Product *p[],int count){
    int no;
    listProduct(p,count);
    printf("번호는?(취소:0)");
    scanf("%d",&no);
    return no-1;
}

