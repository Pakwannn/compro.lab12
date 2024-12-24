#include<iostream>
#include<ctime>
using namespace std;
long long int fibonacci(long long);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(long long int x){
    if(x <= 1){
        return x;
    }else if(x > 1){
        return fibonacci(x-1) + fibonacci(x-2);
    }
return -1;
}
