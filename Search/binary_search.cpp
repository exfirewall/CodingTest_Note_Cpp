#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> &a){
    int left=0, right, mid, key;
    int answer = 0;
    // suppose the a array is argument 
    sort(a.begin(), a.end());
    
    right = a.size() - 1;
    while(left <= right){
        mid = (left+right) / 2;
        if(a[mid] == key){
            answer = mid+1;
            return answer; // index of key
        }
        else if (a[mid] < key){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
}
