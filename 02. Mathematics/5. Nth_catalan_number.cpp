
#include <iostream>
using namespace std;
 
// A recursive function to find nth catalan number
unsigned long int catalan(unsigned int n)
{
    // Base case
    if (n <= 1)
        return 1;
 
    // catalan(n) is sum of
    // catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
        res += catalan(i) * catalan(n - i - 1);
 
    return res;
}
 
// Driver code
int main()
{int n;
 cout<<"Write a number you want a catalan"<<endl;
 cin>>n;
 
    for (int i = 0; i < n; i++)
        cout << catalan(i) << " ";
    return 0;
}
