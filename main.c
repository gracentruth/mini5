#include "manager.h"

int main(){
    Product *p[100];
    int count=0;
    int m;
    int num;
 
while(1){

    int m = selectMenu();
    if(m==0)break;
else if(m==1){
    if(count>0){
        listProduct(p,count);
    }
    else printf("입력된 데이터가 없습니다.");
}
else if(m==2){
    p[count]=malloc(sizeof(Product));
    count+=createProduct(p[count]);
}
else if(m==3){
    if(count!=0){
    num=selectDataNo(p,count);
            updateProduct(p[num]);
    }
    else  printf("데이터가 없습니다!\n");
}
  
        
else if(m==4){
    num=selectDataNo(p,count);
    if(num==-1){
        printf("취소됨!");
        break;
    }
    else{
    deleteProduct(p[num]);
    count--;
    }
        }
       
    }
    printf("종료됨");
printf("hello");
}
