
public class MyLinkedList {
    public MyLinkedList() {
        
    }

    public class Node{
        public int val;
        public Node next;
        public Node(int val){
        this.val=val;
        }
    }
    Node head=null;
    int size = 0;
    public int Get(int index) {
        if(index>size){return -1;}
        Node curr=head;
        int i = 0;
        while(i<index && curr!=null){
            curr=curr.next;
            i++;
        }
        if (index == i && curr != null){
            return curr.val;
        }
        return -1;
    }
    
    public void AddAtHead(int val) {
        Node curr=new Node(val);
        curr.next=head;
        head=curr;
        size++;
    }
    
    public void AddAtTail(int val) {
        Node n = new Node(val);
        size++;
        if (head == null) {
			head = n;
			return;
		}
        Node curr = head;
        while(curr!=null && curr.next!=null){
            curr=curr.next;
        }
        curr.next=n;
    }
    
    public void AddAtIndex(int index, int val) {
        if (index > size)
			return;

		if (index == 0) {
			size++;
			AddAtHead(val);
			return;
		}

		if (index == size) {
			size++;
			AddAtTail(val);
			return;
		}
        Node curr=head;
        int i = 0;
        while(curr!=null){
            i++;
            if (index == i) {
				Node n = new Node(val);
				n.next = curr.next;
				curr.next = n;
				size++;
				break;
			}
            curr=curr.next;
        }
    }
    
    public void DeleteAtIndex(int index) {
        if (index == 0) {
			Node tmp = head;
			head = head.next;
			size--;
			tmp=null;
			return;
		}
        Node curr=head;
        Node prev=null;
        while(curr!=null && index > 0) {
			prev = curr;
			curr = curr.next;
			index--;
		}

		if (index == 0 && curr != null) {
			Node tmp = curr;
			prev.next = curr.next;
			size--;
			tmp=null;
		}
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.Get(index);
 * obj.AddAtHead(val);
 * obj.AddAtTail(val);
 * obj.AddAtIndex(index,val);
 * obj.DeleteAtIndex(index);
 */
