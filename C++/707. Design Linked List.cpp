class Node {
    public: 
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList {
public:
    Node* head=NULL;
    int size = 0;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index>size){return -1;}
        Node* curr=head;
        int i = 0;
        while(i<index && curr!=NULL){
            curr=curr->next;
            i++;
        }
        if (index == i && curr != NULL){
            return curr->val;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* curr=new Node(val);
        curr->next=head;
        head=curr;
        size++;
    }
    
    void addAtTail(int val) {
        Node* n = new Node(val);
        size++;
        if (head == NULL) {
			head = n;
			return;
		}
        Node* curr = head;
        while(curr!=NULL && curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=n;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size)
			return;

		if (index == 0) {
			size++;
			addAtHead(val);
			return;
		}

		if (index == size) {
			size++;
			addAtTail(val);
			return;
		}
        Node* curr=head;
        int i = 0;
        while(curr!=NULL){
            i++;
            if (index == i) {
				Node *n = new Node(val);
				n->next = curr->next;
				curr->next = n;
				size++;
				break;
			}
            curr=curr->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index == 0) {
			Node *tmp = head;
			head = head->next;
			size--;
			tmp=NULL;
			return;
		}
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL && index > 0) {
			prev = curr;
			curr = curr->next;
			index--;
		}

		if (index == 0 && curr != NULL) {
			Node *tmp = curr;
			prev->next = curr->next;
			size--;
			delete tmp;
		}
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
