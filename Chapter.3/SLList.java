
public class SLList {

	public class IntNode {
		public int value;
		public IntNode next;

		public IntNode(int v, IntNode n){
			value = v;
			next = n;
		}
	}

	/* the first item (if it exists) 
	is at sentinel.next.	*/
	public IntNode sentinel;
	public int size;

	/* the constructor without params.	*/
	public SLList(){
		sentinel = new IntNode(63, null);
		size = 0;
	}
	
	/* the constructor with params.	*/
	public  SLList (int x) {
		sentinel = new IntNode(63, null);
		sentinel.next = new IntNode(x, null);
		size = 1;
	}

	/** Adds x to the front of the list.	*/
	public void addFirst(int x) {
		sentinel.next = new IntNode(x, sentinel.next);
		size = size +　１；
	}

	/** Returns the first item in the list.	*/
	public int getFirst(){
		return sentinel.next.value;
	}

	/** Adds x the end of the list.	*/
	public void addLast(int x) {
		size = size + 1;

		IntNode p = sentinel;

		/** Advanced p to the end of the list.	*/
		while (p.next != null) {
			p = p.next;
		}

		p.next = new IntNode(x, null);


	}

	public static void main(String[] args) {
		
	}
}