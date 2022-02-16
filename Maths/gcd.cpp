//************* GCD****************

#include <bits/stdc++.h>
using namespace std;
#define ll long long

//*****CoPrime Number*****
// If gcd(a,b)=1, then a and b is called coprime number.

//*** Properties of GCD****
// 1. gcd(a,b)=gcd(a,b-a) ,if b>a;
// **2. gcd(a,b)=gcd(b%a,a); --->>>Euclidean Algorithm  O(log(max(a,b)));

//*** This function is also already inbuilt and works at same speed. __gcd(a,b);
int gcd(int a, int b)
{
    if (a == 0)
        return b;

    return gcd(b % a, a);
}
int main()
{

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}