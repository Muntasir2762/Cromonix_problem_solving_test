#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[12];
    int numberOfElements;
    int target;
    int sum;
    cout<<"How many elements want to take?:";
    cin>>numberOfElements;

    if(numberOfElements<2){
        cout<<"Invalid Array!! Array elements must be 2 or greater than 2";
        return 0;
    }
    else{
        cout<<"Give Input of a sorted array:";
        for(int i=0;i<numberOfElements;i++){
            cin>>arr[i];
            }
    }
    cout<<"Enter the target number:";
    cin>>target;
    for(int i=0;i<numberOfElements;i++){
            sum=0;
            for(int j=0;j<numberOfElements;j++){
                sum=arr[i]+arr[j];
                if(sum==target && !(i==j)){
                        cout<<"["<<i<<","<<j<<"]";
                        return 0;

                }

            }

    }

    return 0;
}
