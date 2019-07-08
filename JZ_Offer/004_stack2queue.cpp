class Solution
{
public:
    // void push(int node) {
    //     while (!stack2.empty()) {
    //         int node_tmp = stack2.top();
    //         stack1.push(node_tmp);
    //         stack2.pop();
    //     }
    //     stack1.push(node);
    // }

    // int pop() {
    //     int node;
    //     while (!stack1.empty()) {
    //         int node_tmp = stack1.top();
    //         stack2.push(node_tmp);
    //         stack1.pop();
    //     }
    //     node = stack2.top();
    //     stack2.pop();
    //     return node;
    // }
    
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int node;
        if (stack2.empty()) {
            while (!stack1.empty()) {
                int node_tmp = stack1.top();
                stack1.pop();
                stack2.push(node_tmp);
            }
        }
        node = stack2.top();
        stack2.pop();
        return node;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};