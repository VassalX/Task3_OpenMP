#include "Smooth.h"
#include <iostream>

void showVector(const std::vector<double>& v){
    for(size_t i = 0; i < v.size()-1; i++){
        std::cout<<v[i]<<", ";
    }
    std::cout<<v[v.size()-1]<<std::endl;
}

std::vector<double> smoothVector(const std::vector<double>& v, const size_t n, const size_t m){
    std::vector<double> v1 = v;
    std::vector<double> v2 = v;
    for(int i = 0; i < m; i++) {
        for(int j = 1; j < n-1; j++){
            if(v1[j] == 0){
                v2[j] = (v1[j-1]+v1[j+1])/2;
            }
        }
        v1 = v2;
    }
    return v2;
}