//The code is written using templates for better reusabilty.


#include<iostream>
using namespace std;
template <class T>
class Merge_sort{
T arr[100];int n;
public:
Merge_sort(int x){
n = x;
}
void getdata();
void merge_sort(int low,int high);
void merge(int low, int mid,int high);
void PrintArray();
};
template<class T>
void Merge_sort<T>::getdata(){  
    cout<<"give the elements in random order: ";
    int i ;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(0,n-1);
}
template <class T>
void Merge_sort<T>::merge_sort(int low,int high)
{
if(low<high){
    int mid;
    mid =(low+high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge(low,mid,high);
}
}
template <class T>
void Merge_sort<T>::merge(int low,int mid,int high){
    int i,j,k;
    int c[50];
    i = k = low;
    j = mid +1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
 
    while (i <= mid) {
        c[k] = arr[i];
//            cout<<"k: "<<k;
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
//            cout<<"k: "<<k;
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
template <class T>
void Merge_sort<T>::PrintArray()
{
for (int i = 0; i < n; ++i)
{
cout << arr[i] << ' ';
}
cout << endl;
}
int main()
{
int n;
cout<<"give number of elements: ";
cin>>n;
char ch ='Y';
int cho;
while(ch!='N'){
cout<<"Give 1 for integer data type sorting"<<endl;
cout<<"Give 2 for double/float data type sorting"<<endl;
cout<<"Give 3 for charecter data type sorting"<<endl;
cin>>cho;
switch(cho){
case 1:
{
Merge_sort<int> m1(n);
    m1.getdata();
    m1.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 2:
{
Merge_sort<double> m2(n);
    m2.getdata();
    m2.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 3:
{
Merge_sort<char> m3(n);
    m3.getdata();
    m3.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
}
}
}
