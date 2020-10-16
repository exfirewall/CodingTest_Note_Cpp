#include <cmath>

using namespace std;

int main(){
    // 소수점 셋째 자리에서 반올림
    // 소수점 셋째 자리를 첫째 자리로 바꾼 후 round해주고 다시 100.0을 나눠 돌려놓는다.
    double x = 35.1267;
    x = round(x*100) / 100.0 // 35.13
    
    // 올림
    double x = 34.25;
    x = floor(x) // 35
    
    // 내림
    double x = 34.25;
    x = ceil(x) // 34
}
