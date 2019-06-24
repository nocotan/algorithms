#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdio>
long long int N = 0, A = 0, B = 0;
long long int S = 0;
int main(void){
    long long int sum = 0;
    long long int max = 0;
    long long int min = INT_MAX;
 
    std::cin >> N >> A >> B;
    for(int i=0; i<N; ++i){
        std::cin >> S;
        sum += S;
        max = std::max(max, S);
        min = std::min(min, S);
    }
    double ave = (1.*sum)/N;
 
    if(max == min){
        std::cout << -1 << std::endl;
    }else{
        double P = (1.*B)/(1.*max-min);
        double Q = A - ave*P;
        printf("%.10lf %.10lf\n", P, Q);
    }
    return 0;

