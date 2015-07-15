#include <bits/stdc++.h>
 using namespace std;
/* Helper function that multiplies 2 matricies F and M of size 2*2, and
  puts the multiplication result back to F[][] */
void multiply(int F[2][2], int M[2][2]);
 
/* Helper function that calculates F[][] raise to the power n and puts the
  result in F[][]
  Note that this function is desinged only for fib() and won't work as general
  power function */
void power(int F[2][2], int n);
 
int fib(int A,int B,int n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
      return 0;
  power(F, n-1);
  int z=(A*F[0][1]+B*F[0][0])%1000000007;
return z;
}
 
void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
void power(int F[2][2], int n)
{
  int i;
  int M[2][2] = {{1,1},{1,0}};
 
  // n - 1 times multiply the matrix to {{1,0},{0,1}}
  for (i = 2; i <= n; i++)
      multiply(F, M);
}
 
/* Driver program to test above function */
int main()
{
  int n,A,B;
  cin>>A>>B>>n;
  if(n==0) cout<<A<<endl;
  else if(n==1) cout<<B<<endl;
  else
  	cout<<fib(A,B,n)<<endl;
  return 0;
}
