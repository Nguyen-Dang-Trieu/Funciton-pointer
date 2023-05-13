#include <stdio.h>

// A normal function with an int parameter
// and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
  
int main()
{
    // fun_ptr is a pointer to function fun() 
    void (*fun_ptr)(int) = &fun;
  
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);       //dùng để khai báo con trỏ tới 1 hàm
       fun_ptr = &fun;             //gán địa chỉ của hàm fun() cho con trỏ hàm trỏ tới hàm đó
    */

    // Invoking fun() using fun_ptr
    (*fun_ptr)(9);
  
    return 0;
}