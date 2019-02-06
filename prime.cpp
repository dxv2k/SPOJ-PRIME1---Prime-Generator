#include <iostream>
#include <cmath>

#define MAX 10

using namespace std;

//Global variables
int a[MAX][2];

// Check if Prime
bool isPrime(long a)
{
  	if(a == 0 || a == 1) return false;
  	if(a == 2) return true;

  	for(int i = 2; i*i <= a; i++)
  		if(a % i == 0)
  			return false;

  	return true;
}

int main()
{
    // N test case
    int n;
    cin >> n;

    for (int i=0;i<n;i++)
        cin >> a[i][0] >> a[i][1];

    for (int i=0;i<n;i++)
    {
        for (int j=a[i][0];j<=a[i][1];j++)
                if (isPrime(j)==true)
                      cout << j << endl;
        cout << endl;
    }
    return 0;
}
