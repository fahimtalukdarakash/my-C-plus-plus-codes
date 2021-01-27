#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    //scanf("%d %d", &a, &b);
    cin>>a;
    cin>>b;
    update(pa, pb);
    //printf("%d\n%d", a, b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
