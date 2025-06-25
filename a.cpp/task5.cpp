#include <iostream>
using namespace std;

int main() {
    int n,c;
    bool f=true;
    cout << "enter the length of the array, then its values: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> c;
    for(int i=0;i<n;i++){
        if(c==arr[i]){
            cout << " Found at index "  << i << endl;
            f = false;
            break;
        }
    }
    if(f==true){
        cout << "Not Found";
    }

    return 0;
    }