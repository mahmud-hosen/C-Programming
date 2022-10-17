#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
    queue <int> q;
    q.push(2);
    q.push(4);
    q.push(9);
    q.push(8);
    q.push(3);
    q.push(1);

    printf("%d \n", q.front());

    q.pop(); // 2 pop
    printf("%d \n", q.front());

    q.pop(); // 4 pop
    q.pop(); // 9 pop
    printf("%d \n", q.front());



    return 0;
}
