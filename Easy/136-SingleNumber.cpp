#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {4, 6, 7, 7, 6};
    int ans = 0;
    for(int i : nums){
        ans = ans ^ i;
    }
    cout << "Single No: " << ans << endl;
    return 0;
}
