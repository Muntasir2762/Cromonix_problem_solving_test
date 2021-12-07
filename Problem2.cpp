//Input......
/*0 0 1 0 0
1 1 1 1 0
1 0 1 1 0
1 0 1 1 1
1 0 1 0 1
0 1 1 1 1
0 0 1 1 1
1 1 1 0 0
1 0 0 0 0
1 1 0 0 1
0 0 0 1 0
0 1 0 1 0*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter_1=0;
    int counter_0=0;
    int gamma[5];
    int epsilon[5];
    int arr [12][5];
    cout<<"Enter the value of diagonostic report as binary:\n";
    for(int i=0;i<12;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<5;i++){
        counter_0=0;
        counter_1=0;

        for(int j=0;j<12;j++){
            if(arr[j][i]==1){
                counter_1++;
            }
            else{
                counter_0++;
            }
            if(counter_1>counter_0){
                gamma[i]=1;
                epsilon[i]=0;
            }
            else{
                gamma[i]=0;
                epsilon[i]=1;
            }
        }
    }

cout<<"gamma rate is:";
for(int i=0;i<5;i++){
    cout<<gamma[i]<<" ";
}
cout<<endl<<"--------------"<<endl;
cout<<"epsilon rate is:";
for(int i=0;i<5;i++){

    cout<<epsilon[i]<<" ";
}

    return 0;
}
