#include <stdio.h>
 
int UCLN(int m, int n){
  int r;
  if(m<n) return UCLN(n,m);
  r = m % n;
  if(r == 0) return n;
  else return UCLN(n,r);
}
  
int main(void) {
  int kq,m,n;
  printf("Nhập giá trị m: ");
  scanf("%d", &m);
  printf("Nhập giá trị n: ");
  scanf("%d", &n);
  kq = UCLN(m,n);
  printf("Kết quả: %d",kq);
  return 0;  
}
//https://codehow.net/de-quy-duoi-tail-recursion-trong-c-c++-88.html
