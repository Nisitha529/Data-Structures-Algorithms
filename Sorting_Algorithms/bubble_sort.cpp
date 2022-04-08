#include <iostream>

using namespace std;

void bubble_s(int a[],int len){
    bool not_sorted = true;
    while (not_sorted)
    {
        not_sorted = false;
        for (int i = 1 ; i < len; i++){
            int temp = a[i];
            if (a[i-1]>temp){
                a[i] = a[i-1];
                a[i-1] = temp;
                not_sorted = true;
            }
        }
    }
    
}

int main() {
    int b[] = {8,4,3,7,10,2,1};
    int len = sizeof(b)/sizeof(b[0]);
    bubble_s(b,len);
    //cout << "Hello World!";
    for (int k = 0 ; k<4;k++){
        cout<<b[k]<<endl;
    }
    return 0;

}
