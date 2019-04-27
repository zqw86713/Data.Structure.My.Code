class MyLinkedList {

    /** IntNode class.  */
    public class IntNode {
        int value;
        IntNode next;

        public IntNode(int v, IntNode n){
            value = v;
            next = n;
        }
    }

    /* the next of sentinel node always point to the first node.    */
    public IntNode sentinel;
    public int size;

    /* the constructor without params.  */
       public MyLinkedList() {
        sentinel = new IntNode(63, null);
        size = 0;
    }
    
    /* the constructor with params. */
    public MyLinkedList(int x) {
        sentinel = new IntNode(63, null);
        sentinel.next = new IntNode(x, null);
        size = 1;
    }
      
    

    /** Add a node of value val before the first element of the linked list.
     After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int x) {
        sentinel.next = new IntNode(x, sentinel.next);
        size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int x) {
       
        size = size + 1;
        IntNode p = sentinel;

        /** Advanced p to the end of the list.  */
        while (p.next != null) {
            p = p.next;
        }

        p.next = new IntNode(x, null);
    }


    /** Get the value of the index-th node in the linked 
    list. If the index is invalid, return -1. 
    */
  public int get(int index) {
        if(index < 0 || index >= this.size) {
            return -1;
        }
        else {
            int counter = 0;
            //  Node curr = head;
            IntNode p = sentinel;
            while(counter != (index)) {
                p = p.next;
                counter++;
            }
            return p.value;
        }
        
    }

    
    /** Add a node of value val before the index-th node in the linked list. 
    If index equals to the length of linked list, the node will be appended
    to the end of linked list. If index is greater than the length, the node 
    will not be inserted. 
    */
    public void addAtIndex(int index, int val) {
        IntNode p = sentinel;
        /* j is the counter.    */
        int j = 1;

        while (p.next != null && j < index) {
            p = p.next;
            j = j + 1;
        }

        if (p.next == null) {
            /* p reach the end of the list. */
            System.out.print("the index is greater than the length.");
        } else {

            IntNode new_node = new IntNode(val, null);
            new_node.next = p.next ;
            p.next = new_node;

            size++;
        }
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        IntNode p = sentinel;
        /* j is the counter.    */
        int j = 1;

        while (p.next != null && j < index) {
            p = p.next;
            j = j + 1;
        }

        if (p.next == null || j > index) {
            System.out.print("The index is not valid.");
        } else {
                   
            p.next = p.next.next ;
            size--;
        }

    }
}

public class IntList    {
    public int first;
    public IntList rest;

    public IntList(int f, IntList r) {
        first = f;
        rest = r;
    }
}

public class IntNode {
    public int item;
    public IntNode next;
}

public class SLList {
    private IntNode first;

    public SLList(int x) {
        first = new IntNode(x, null);
    }
}

SLList L2 = new SLList(5);

/**     Adds an item to the front of the list.  */
public void addFirst(int x) {
        first = new IntNode(x, first);
}

/** Retrieves the front item from the list.     */
public int getFirst() {
        return first.item;
}

SLList L = new SLList(15);
L.addFirst(10);
L.addFirst(5);
int x = L.getFirst();

public void addLast(int x) {
        intNode p = first;

        while (p.next != null) {
                p= p.next;
        }
        p.next = new IntNode(x, null);
}

/*      returns the size of the list starting at IntNode p.     */
private static int size（IntNode p） {
        if (p.next == null) {
                return 1;
        }

        return 1 + size(p.next);
}

public int size() {
        return size(first);
}

public class SLList {
        private IntNode first;
        private int size;

        public SLList(int x){
                first = new IntNode(x, null);
                size = 1;
        }

        public void addFirst(int x) {
                first = new IntNode(x, first);
                size += 1;
        }

        public int size() {
                return size;
        }


        public void addLast(int x){
                size += 1;
                IntNode p = sentinel;

                while(p.next != null) {
                        p = p.next;
                }
        }
}

public void addLast(int x)  {
        size += 1;
        intNode p = sentinel;
        while (p.next != null) {
                p = p.next;
        }

        p.next = new IntNode(x, null);
}

public void addLast(int x) {
        size += 1;
        intNode p = sentinel;
        while(p.next != null) {
                p = p.next;
        }
        p.next = new IntNode(x, null);
}

public class IntNode {
        public IntNode prev;
        public int item;
        public IntNode next;
}

public class DLList<BleepBlorp> {
        private IntNode sentinel;
        private int size;

        public class IntNode {
                public IntNode prev;
                public BleepBlorp item;
                public IntNode next;
        }
}

DLList<String> d2 = new DLList<>("hello");
d2.addLast("world");

DLList<String> d2 = new DLList<>("Hello");
d2.addLast("world");