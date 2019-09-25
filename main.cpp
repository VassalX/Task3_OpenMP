#include <vector>
#include "Smooth.h"
using namespace std;

int main() {
    const size_t n = 100;
    const size_t m = 10;
    vector<double> v1(n);
    v1[0] = 1;
    v1[n - 1] = 1;
    for(int i = 1; i < n-1; i++){
        if(i == n/2){
            v1[i] = 1;
        } else {
            v1[i] = 0;
        }
    }
    vector<double> v2(v1);
    showVector(v1);
    v1 = smoothVector(v1,m,n);
    showVector(v1);
    return 0;
}