#include <bits/stdc++.h>
using namespace std;

int is_found_k(int arr[], int k){
   
   for (int i = 0; i < 7; i++)
   {
      if (arr[i] == k)
      { return 1;

         
      }
      
   }
return -1;
}
int main()
{

   int arr[7] = {1, 2, 3, 4, 5, 6, 7};
   int k = 7;
  cout <<  is_found_k(arr, k);
   
  
}