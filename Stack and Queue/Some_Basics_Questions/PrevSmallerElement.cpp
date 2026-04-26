#include<iostream>
#include<vector>
#include<stack>

using namespace std;


vector<int> prevSmallerElement(vector<int>& arr, int size){

    vector<int> ans(size);
    stack<int> st;

    st.push(-1);

    for(int i = 0; i <= size-1; i++){
        int currElem = arr[i];
        while(st.top() >= currElem){
            st.pop();
        }
        ans[i] = st.top();
        st.push(arr[i]);
    }

    return ans;

}




int main(){

    vector<int> arr = {10, 20, 30, 40};

    vector<int> ans  = prevSmallerElement(arr, arr.size());

    cout << "{ ";
    for(int x : ans){
        cout << x << ", ";
    }
    cout << "}";
    return 0;

}