/*Given an array of size n, find all elements in array that appear more than n/k times.
Sample Input 0
8                //n
1 3 1 2 2 2 3 3     //array
4               //k
Sample Output 0
2         
3
n= 8 so, n/k = 8/4 so the numbers whose frequencies are greater than 2(n/k) are 2 and 3.
Sample Input 1
8                //n
1 2 6 6 6 6 6 10    //array
4               //k
Sample Output 1
6
n= 8 so, n/k = 8/4 so the number whose frequencies are greater than 2(n/k) is 6.
The same problem can be solved when k is fixed to 2.
*/

#include<iostream>
using namespace std;
void sorting(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
void findElement(int arr[],int n,int target){
    sorting(arr,n);
    int count;
    int check[100];
    for(int i=0;i<n;i++){
        if(check[i]==1){
            continue;
        }
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                check[j] = 1;
                count++;
            }
        }
        if(count>target){
            cout<<arr[i];
        }
      /* if the count (number of occurences of a number is greater than n/k, then print that number*/
    }
}
int main(){
    int n,k,arr[100];
    cout<<"n: ";
    cin>>n;
    cout<<"k: ";
    cin>>k;
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    target = n/k;
    findElement(arr,n,target);
}
/* we first sort the array so that it is easier to count*/
