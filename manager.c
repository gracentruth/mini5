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
void searchName(Product *p[], int count){
    int pcount=0;
    char search[20];

    printf("검색할 메뉴?");
    getchar();
    scanf("%[^\n]s",search);

    for(int i=0; i<count;i++){
        if(p[i]->gram!=-1){
            if(strstr(p[i]->name,search)){
        printf("%2d",i+1 );
    readProduct(*p[i]);
    pcount++;
            }
        }
    }
    if(pcount==0)printf("=>검색된 데이터 없음!");
    printf("\n");
}
void searchPrice(Product *p[], int count){
    int pcount=0;
    int searchprice;

    printf("검색할 메뉴?");
    getchar();
    scanf("%d",&searchprice);

    for(int i=0; i<count;i++){
        if(p[i]->gram!=-1){
            if(p[i]->price==searchprice){
        printf("%2d",i+1 );
   readProduct(*p[i]);
    pcount++;
            }
        }
    }
    if(pcount==0)printf("=>검색된 데이터 없음!");
    printf("\n");
}
void searchSprice(Product *p[], int count){
    int pcount=0;
    int searchsprice;

    printf("검색할 메뉴?");
    getchar();
    scanf("%d",&searchsprice);

    for(int i=0; i<count;i++){
        if(p[i]->gram!=-1){
            if(p[i]->price==searchsprice){
        printf("%2d",i+1 );
    readProduct(*p[i]);
    pcount++;
            }
        }
    }
    if(pcount==0)printf("=>검색된 데이터 없음!");
    printf("\n");
}
int saveData(Product *p[],int count){
    FILE *fp; 
    fp=fopen("product.txt","wt");
    for(int i=0;i<count;i++){
        if(p[i]->gram!=-1){
    fprintf(fp,"%10s %6d %6d %6d %6d\n",p[i]->name,p[i]->gram,p[i]->price,p[i]->sprice,p[i]->star); 
        }
    } 
    fclose(fp);
    printf("저장됨!");
    return count;
}
int loadData(Product *p[]){
    int count=0;
    FILE *fp;
    fp=fopen("product.txt","rt");
 
     if(fp==NULL){
         printf("=>파일 업음\n");
         return 0;
     }
     for(;;count++){
          
         fgets(p[count]->name,sizeof(p[count]->name),fp);
          fscanf(fp,"%6d %6d %6d %6d\n",&p[count]->gram,&p[count]->price,&p[count]->sprice,&p[count]->star);
         
    if(feof(fp))break;//파일의 끝인지 비교하기
     }
     fclose(fp);
     printf("=>로딩 성공!");
    return count;
}

