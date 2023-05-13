# Bai1.c
 -Why do we need an extra bracket around function pointers like fun_ptr in above example ? <br>
 If we remove bracket, then the expression "void (\*fun_ptr)(int)" becomes "void \*fun_ptr(int)" which is declaration of a function that returns void pointer.
 
# Following are some interesting facts about function pointers.
1) Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.
2) Unlike normal pointers, we do not allocate de-allocate memory using function pointers.
3) A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing \*, the program still works. <br>

~~~cpp
 #include <stdio.h>
 void fun(int a)
 {
    printf("Value of a is %d\n", a);
 }
  
int main()
{ 
    void (*fun_ptr)(int) = fun; 
    fun_ptr(10);  
    return 0;
}
~~~
4) Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers. (bai2.c)
