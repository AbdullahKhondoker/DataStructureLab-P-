#include <iostream>
#include <string>
using namespace std;
int main() {
    int x[10] = {8,4,6,1,6,9,6,1,9,8};

    for (int i=0;i<9;i++) {
        int m=1;
        for (int j=i+1;j<10;j++) {
            if (x[i]==x[j]) m++;
        }
        cout<<"The number "<<x[i]<<" Occurred = "<<m<<" times"<<"\n";
    }
}
