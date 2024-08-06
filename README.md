## Reference
- https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-cpp/ <br>
- https://www.geeksforgeeks.org/function-pointer-in-c/
- https://www.youtube.com/watch?v=5D9okfoAlKg
- https://inpyjama.com/function-pointers/
- https://inpyjama.com/c-pointers-course/
- https://bytecodealliance.github.io/wamr.dev/blog/moving-the-embedded-world-to-webassembly-practice-in-chre/
  
## Bai1.c
 => Why do we need an *extra bracket around function pointers* like `fun_ptr` in above example ? <br>
 If we remove `bracket`, then the expression `void (*fun_ptr)(int)` becomes `void *fun_ptr(int)` which is declaration of a function that returns void pointer.
 
## Following are some interesting facts about function pointers.
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
5) Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function. For example, consider the following C program where wrapper() receives a void fun() as parameter and calls the passed function.
~~~cpp
// A simple C program to show function pointers as parameter
#include <stdio.h>
  
// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }
  
// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
    fun();
}
  
int main()
{
    wrapper(fun1);
    wrapper(fun2);
    return 0;
}
~~~

## Why Function Pointers are Awesome ?
**Reference:**
- https://www.youtube.com/watch?v=PcAD6gjNUVw&t=258s

## Callback Function in C Programming
- https://embetronicx.com/tutorials/p_language/c/callback-function-in-c-programming
- https://open4tech.com/using-callbacks-in-firmware-development/#google_vignette
