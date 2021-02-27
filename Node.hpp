class Node
{
    private:
        int payload;
        Node* nextNode;
        Node* priorNode;
        
    
    public:
        Node(int payload);
        void setNextNode(Node* n);
        void setPriorNode(Node* n);
        Node* getNextNode();
        int getPayload();
};