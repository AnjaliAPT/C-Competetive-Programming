// #include<stdio.h>

// int main()
// {
//     // int x;
//     // x = 3 + 4 - 7 * 8 / 5 % 10;
//     // printf("%d", x);

//     // int a[] = {1, 2, 3, 4, 5};

//     // int *p = a;
//     // ++*p;

//     // p += 2;

//     // printf("%d", *p);

//     // int x = -10;

//     // while(x++ != 0);
//     // printf("%d ", x);

//     // int i;

//     // i = 0x05+010+10;
//     // printf("\nx=%x",  i);
    
//     // int a = 0, i = 0, b;

//     // for(i = 0; i < 5; i++)
//     // {
//     //     a++;
//     //     if(i == 4)
//     //         break;
//     // }
//     // printf("%d", a);

//     // int p = 1;
//     // int q = 0;
//     // {
//     //     q = (p++)+q+(++p)+q;
//     // }
//     // printf("%d", q);

//     // int x = 4;
//     // int y = 0;

//     // int z = (y == 0) ? x : (x > y) ? (y = 1) : x;
//     // printf("%d\n", z);


//     // int a = 1, b = 2, c = 3, d =  4, e;

//     // e = c + d - b * a;

//     // printf("%d, %d\n", e, d);

//     // int x = 6;

//     // int z = x + ( x = 12);

//     // printf("%d\n", z);


//     // int x = 0;
//     // int y;

//     // x = (x == (x == 1));
//     // printf("%d", x);

//     // char c = 'P';

//     // switch(c)
//     // {
//     //     case 'P':
//     //         printf("P");
//     //     case 'Q':
//     //         printf("Q");
//     //     case 'C':
//     //     default:
//     //         printf("default");
//     // }
//     int i;
// //      for ( i = 2 ; i ; --i) printf("%d\n", i);

// //      printf("A");

// //      i = 2; while (i-- != 0) printf("%d\n", i);

// //     printf("B");
// // i = 2; do { printf("%d\n", i); i--; } while (i != 0);
// //   printf("C");
// //     for ( i = 2 ; i == 0 ; --i) printf("%d\n", i);



//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// void pattern(int x, int n)
// {
//    if(x == n)
//    {
//         cout<<x<<" ";
//         return;
//    }
//    else if(x <= 0)
//    {
//         cout<<x<<" ";
//         x = x + 5;
//         pattern(x, n);
//    }
//    else
//    {
//         cout<<x<<" ";
//         x = x - 5;
//         pattern(x, n);
//    }
// }

// int main()
// {
//     int t, n, x;
    
//     scanf("%d", &t);
    
//     while (t--)
//     {
//         scanf("%d", &n);
//         cout<<n<<" ";
//         x = n - 5;
//         pattern(x, n);
//         cout<<"\n";
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
int n;
for(n = 9; n!=0; n--)
printf("n = %d", n--);
return 0;
}