#include <stdio.h>

void Fibonacci(int n)

{

int sum = 0;

int prev_value = 0;

for(int i = 0; i <= n; i++)

{

printf("%d ", sum);

if(sum == 0)

{

sum += 1;

}

else

{

int new_value = sum;

sum += prev_value;

prev_value = new_value;

}

}

}

int main(void)

{

Fibonacci(20);

return 0;

}