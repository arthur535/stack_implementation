#include "/Users/arthur/Desktop/data structures/Stack/stack.hpp"

#include <stack>
int main(){
    Stack<int> st;
    st.push(12);
    st.push(23);
    st.push(45);
    st.push(75);
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << endl<< st;
}
