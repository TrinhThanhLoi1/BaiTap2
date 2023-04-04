#include <stdio.h>
bool isEven(int n);
bool isOdd(int n);
  
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
  
bool isOdd(int n){
  return !isEven(n);
}
 
int main() {
  int n = 5;
  bool kq = isEven(n);
  if(kq == true)
    printf("%d là số chẵn",n);
  else
    printf("%d là số lẻ",n);
  
}
//https://codehow.net/de-quy-tuong-ho-mutual-recursion-trong-c-c++-92.html
