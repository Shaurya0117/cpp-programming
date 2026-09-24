#include<iostream>
#include<climits>
using namespace std;



void mergesort(int A[],int p, int r){

    if(p<r){
        int q = (p+r)/2;
        mergesort(A,p,q);
        mergesort(A,q+1, r);
        merge(A,p,q,r);
    }
}
void merge(int A[],int p, int q, int r){
    int n1 = q - p +1;
    int n2 = r -q;

    int L[n1+1];
    int R[n2+1];
    
    int i = 1;
    int j = 1;
    for(int i=1; i<=n1;i++){
        L[i] = A[p+i-1];

    }
    for(int j =1; j<=n2;j++){
        R[j] = A[q+j];

    }
    L[n1+1]= INT_MAX;
    R[n2+1] = INT_MAX;

for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }


}
int main(){
   int A[]={5,2,7,4,1,3,2,6};
   int n  = 8;
   for(int i =1;<n;i++){
    cout<<A[i]<<" ";
   }
   mergesort(A,1,n);

   for(int i =1;i<n;i++){
    cout<<A[i]<<" ";
   }
return 0;



}