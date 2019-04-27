
public class LinkedListDeque {

    public class DLList<T> {
    
        public class TypeNode {
            public T item;
            public TypeNode previous;
            public TypeNode next;

            /*  i is the value , p is the  previous node,  n is the next node.     */
            public TypeNode(T i, TypeNode p, TypeNode n){
                item = i;
                previous = p;
                next = n;
            }
        }
        /* the next of sentinel node always point to the first node.    */
        private TypeNode sentinel;
        private int size;

        

            /*  Creates an empty linked list deque. sentinel node have a 
                default value of (7, null, null). 7 is a random assigned number. */
            public LinkedListDeque(){
                sentinel = new TypeNode(7, null, null);
                size = 0;
            }

             /* the constructor with params. */
            public LinkedListDeque()(T x, null, null) {
                sentinel = new TypeNode(63, null,null);
                sentinel.next = new TypeNode(x, null, null);
                sentinel.previous = new TypeNode(x, null, null);
                size = 1;
            }
            
                  

            public TypeNode add();
            public TypeNode remove();
            public TypeNode get();
            public TypeNode size();

            //  Same as get, but uses recursion.
            public T getRecursive(int index);

            /*  The Deque API   */

            /*  Adds an item of type T to the front of the deque.   */
            public void addFirst(T item);

            /*  Adds an item of type T to the back of the deque.    */
            public void addLast(T item);

            /*  Returns true if deque is empty, false otherwise.    */
            public boolean isEmpty();

            /*   Returns the number of items in the deque.  */
            public int size();

            /*   Prints the items in the deque from first to last, separated by a space.    */
            public void printDeque();

            /*  Removes and returns the item at the front of the deque. If no such item exists, returns null.   */
            public T removeFirst();

            /*  Removes and returns the item at the back of the deque. If no such item exists, returns null.    */
            public T removeLast();

            /*  Gets the item at the given index, where 0 is the front, 1 is the next item, and so forth. If no such item exists, returns null. Must not alter the deque!   */
            public T get(int index);
        }
        
    }
}
