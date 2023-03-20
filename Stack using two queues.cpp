/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x){
    
    q2.push(x);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    queue<int> q = q1;
    q1 = q2;
    q2 = q;
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop(){
    if(q1.empty()) return -1;
    int t = q1.front();
    q1.pop();
    return t;
}