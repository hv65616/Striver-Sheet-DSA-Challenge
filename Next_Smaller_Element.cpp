#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int>vt(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(st.empty()!=true && arr[i]<=st.top())
        {
            st.pop();
        }
        if(st.empty()==true)
        {
            vt[i] = -1;
        }
        else
        {
            vt[i] = st.top();
        }
        st.push(arr[i]);
    }
    return vt;
}