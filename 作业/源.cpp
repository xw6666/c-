//#include <cstdio>
//#define MAXSIZE 1000
//typedef int Elemtype;
//bool push(Elemtype a[], int& top, Elemtype x);
//int main()
//{
//    Elemtype fly[MAXSIZE];
//    int top = -1;
//    int n;
//    scanf("%d", &n);
//    while (n > 0)
//    {
//        push(fly, top, n % 2);
//        n = n / 2;
//    }
//    while (top > 0)
//    {
//        printf("%d", fly[top - 1]);
//    }
//    return 0;
//}
//bool push(Elemtype a[], int& top, Elemtype x)
//{
//    if (top == MAXSIZE - 1)
//    {
//        printf("栈满，进栈不成功");
//        return false;
//    }
//    a[++top] = x;
//}