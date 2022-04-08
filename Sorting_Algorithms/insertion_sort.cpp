#include <iostream>
#include <vector>
using namespace std;

void insertion_s(int a[],int len){
    for (int i=1; i<len; i++){
        int temp = a[i];
        int j = i-1;
        while( j>-1 && a[j]>temp){
                a[j+1] = a[j];
                j = j - 1;
        }
        a[j+1] = temp;
    }
}

int main() {
    int b[] = {8,4,2,1};
    int len = sizeof(b)/sizeof(b[0]);
    insertion_s(b,len);
    //cout << "Hello World!";
    for (int k = 0 ; k<4;k++){
        cout<<b[k]<<endl;
    }
    return 0;
}