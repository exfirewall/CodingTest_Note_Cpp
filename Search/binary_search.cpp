#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int left=0, right, mid;
    int answer = 0;
    // suppose the a array is argument 
    vector<int> a;
    sort(a.begin(), a.end());
    
    right = a.size() - 1;
    while(left <= right){
        mid = (left+right) / 2;
        if(a[mid] == key){
            answer = mid;
            break;
        }
        else if (a[mid] < key){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
}
