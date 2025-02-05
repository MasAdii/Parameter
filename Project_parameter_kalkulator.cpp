#include <iostream>
using namespace std;

void add(int a,int b);
void min(int a,int b);
void bagi(int a,int b);
void kali(int a,int b);


int main(){
  add(10,20);
  min(102,20);
  bagi(102,3);
  kali(102,36);
  
  return 0;
}

void add(int a,int b){
  printf("%d + %d = %d\n", a, b, a + b);
}

void min(int a,int b){
  printf("%d - %d = %d\n", a, b, a - b);
}

void bagi(int a,int b){
  printf("%d / %d = %d\n", a, b, a / b);
}

void kali(int a,int b){
  printf("%d * %d = %d\n", a, b, a * b);
}