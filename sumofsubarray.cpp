//Print sum of subarray(Brute Force technique)
//Given array {10,20,30,40,50}
//output should be
//10=10
//10,20=30
//10,20,30=60
//10,20,30,40=100
//10,20,30,40,50=150
//20=20
//20,30=50
//20,30,40=90
//20,30,40,50=140
//30=30
//30,40=70
//30,40,50=120
//40=40
//40,50=90
//50=50
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};//given array
    int n=sizeof(arr)/sizeof(int);//number of elements in an array
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=i; j<n; j++)//why start from i because 10,10 20,10 20 30,.....then 20,20 30,20 30 40,.... its not starting from 10 
        {
        int sum=0;
        //why sum=0 because (10=10),(10 20=0+10=10 10+20=30),(10,20,30=0+10=10 10+20=30 30+30=60......)
        for(int k=i;k<=j; k++)
        {
            sum=sum+arr[k];
            cout<<arr[k]<<"="<<sum<<endl;
        }
        cout<<endl;
        }
    }

    return 0;
}