#include <stdio.h>
 
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
  
int main(void) {
  int kq,n;
  printf("Nhập vị trí n muốn tìm trong dãy fibonacci: ");
  scanf("%d", &n);
  kq = fib(n);
  printf("\nSố fibonacci ở vị trí %d là: %d",n,kq);
 
  return 0;  
}
//https://codehow.net/de-quy-nhi-phan-binary-recursion-trong-c-c++-89.html
