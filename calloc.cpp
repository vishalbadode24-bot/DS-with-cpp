#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of student";
    cin>>n;
    int*arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        cout<<"overflow";
        return 0;
    }
    cout<<"enter"<<n<<"marks";
    int sum=0;
    for(int i=o;i<n;i=++)
    {cin>>arr[i];
    sum=sum+arr[i];
    }
    cout<<"total"<,sum;
    free(arr);
    return 0;
}