class MinStack {
    private:
    struct Node{
        int data;
        Node *next;
        Node(int val):data(val),next(NULL){
            
        }
    };
    Node *topi,*minTop;
public:
    /** initialize your data structure here. */
    
    MinStack() {
        topi = minTop = NULL;
    }
    
    void push(int x) {
        Node *temp1,*temp;
        temp1 = new Node(x);
        if(minTop==NULL || minTop->data >= x){
            temp = new Node(x);
            temp->next= minTop;
            minTop = temp;
        }
        temp1->next = topi;
        topi = temp1;
    }
    
    void pop() {
        Node *temp;
        if(minTop->data == topi->data){
            temp = minTop;
            minTop = minTop->next;
            delete temp;
        }
        temp = topi;
        topi = topi->next;
        delete temp;
    }
    
    int top() {
        return topi->data;
    }
    
    int getMin() {
        return minTop->data;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
