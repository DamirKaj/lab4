#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the length of the array, then its values: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min=arr[0],max=arr[0];
    
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }

    }
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    return 0;
}