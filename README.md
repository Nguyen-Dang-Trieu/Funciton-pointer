# Bai1.c
 -Why do we need an extra bracket around function pointers like fun_ptr in above example ? <br>
 If we remove bracket, then the expression "void (*fun_ptr)(int)" becomes "void *fun_ptr(int)" which is declaration of a function that returns void pointer.
