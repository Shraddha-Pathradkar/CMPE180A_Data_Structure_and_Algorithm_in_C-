#include <iostream>
#include<vector>

using namespace std;

// Time complexity of both the function is O(n^2).

void bubbleSort(vector <int> &vec,int n){

    for(int i=0;i<n-2;i++){
            int change=0;
        for(int j=0;j<n-1;j++){
            if(vec[j]>vec[j+1]){
                int temp= vec[j];
                vec[j]=vec[j+1];
                vec[j+1]= temp;
                change ++;
            }
            if(change==0) return;
        }
    }
}

void selectionSort(vector <int> &vec,int n){

    int minIndex= 0;
    for(int i=0;i<n-1;i++){
            minIndex=i;
        for(int j=i+1;j<n;j++){
            if(vec[minIndex]>vec[j]){
                minIndex=j;
            }
        }
       int temp= vec[i];
       vec[i]=vec[minIndex];
       vec[minIndex]= temp;
    }
}

int main()
{


    vector<int> res;
    res.push_back(1);
    res.push_back(1);
    res.push_back(2);
    res.push_back(2);
    res.push_back(4);
    res.push_back(4);

    bubbleSort(res,9);
    cout<< "The elements after sorting: ";

    for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
    }

    return 0;
}
