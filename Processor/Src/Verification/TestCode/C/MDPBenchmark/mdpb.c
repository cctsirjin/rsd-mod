#include "../lib.c"

__attribute__((noinline)) int test(volatile int* a, volatile int* b, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        *a = i/2+i+1;
        j += *b;
    }
    return j;
} 

int x = 0;
int y = 0;

int main(){
    test(&x, &x, 1000);
    // test(&x, &y, 1000);
    return 0; 
}
