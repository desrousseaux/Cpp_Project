#include <iostream>
#include <ctime>

using namespace std;

int main()
{
time_t timer1, timer2;

time(&timer1);
long l = 1;

for (int i = 1; i < 30; i++)
 l = l*i;

cout << l << '\n';

time (&timer2);

cout << timer2 - timer1 << '\n';

return 0;
}
