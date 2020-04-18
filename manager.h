#include "product.h"

void listProduct(Product *p[],int count); // 전체 등록된 제품 리스트를 출력하는 함수 
int selectDataNo(Product *p[],int count);// 삭제 또는 수정시 삭제, 수정할 제품을 선택하는 함수
void searchName(Product *p[], int count);//제품의 이름을 검색해서 제품 정보를 알아내는 함수
void searchPrice(Product *p[], int count);//제품의 가격을 검색해서 제품 정보를 알아내는 함수
void searchSprice(Product *p[], int count);//제품의 표준가격을 검색해서 제품 정보를 알아내는 함수
int saveData(Product *p[],int count);//제품의 정보를 파일에 저장하는 함수
int loadData(Product *p[]);//제품의 정보가 저장된 파일을 불러오는 함수