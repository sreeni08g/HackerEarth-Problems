#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    // cout<<"hi"<<t;
    while(t>0){
        long long size,d,no;
        cin>>size>>d;
        // cout<<size<<"hi"<<d;
        vector<long long> arr;
        for(int i=0;i<size;i++){
            cin>>no;
            arr.push_back(no);
        }
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        // long long tempno=0;
        // while(tempno<d){
        //     int temp=arr[0];
        //     arr.push_back(temp);
        //     arr.erase(arr.begin());
        //     tempno++;
        // }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        t--;
    }
	return 0;
}