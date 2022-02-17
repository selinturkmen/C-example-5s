#include <stdio.h>
#include <assert.h>
#include <limits.h>

int sum_of_integers(int a, int b){
	int result;
    printf("Input two integers:\n");
    scanf("%d%d", &a, &b);
    assert (0<=a);
	assert (a<=b);
    assert (b<INT_MAX);
	result = ((a + b)*(b-a+1))/2;
  	printf("Sum of integers between [%d, %d]", a, b);
    assert (result>=0);
	return result;
  }
  

int main(){
	int a,b;
	printf("Max_int: %d\n", INT_MAX);
    printf("is %d\n", sum_of_integers(a,b));
    return 0;
}


