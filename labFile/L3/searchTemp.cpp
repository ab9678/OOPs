# include <iostream>
using namespace std;

// search element in an array, use templates

template <typename T>

T search (T n, double *a){
    int i;
    for (i=0;i<5;i++){
        if (a[i]==n){
            cout << "Found";
            return a[i];
        }
    }

    cout <<"Not Found";
    return -1;
}


int main(){
    double a[5];

    cout << "Enter elements: ";
    for(int i=0 ;i<5 ; i++){
        cin >> a[i];
    }

    int res = search<int>(5, a);
    cout << res;

}
