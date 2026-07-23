#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. of issued books: ";
    cin>>n;

    int arr[n];
    cout<<"enter the ID of book";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }
    // for(int i=0 ; i<n ; i++){
    //     for(int j = i+1 ; j<n ; j++){
    //         if(arr[i] == arr[j] && arr[j] !=0 ){
    //             cout<<arr[i]<<endl;
    //             arr[j]=0;
    //             break;
    //         }
    //     }
    // }
    unordered_map<int,int> bookcount;
    for(int i =0 ;i<n ; i++){
        bookcount[arr[i]]++;

    }
    cout << "duplicate book ID";
    for(auto it = bookcount.begin(); it != bookcount.end(); it++){
        if(it->second >1){
            cout<< it-> first<<" ";
        }
    }

    return 0;
}

