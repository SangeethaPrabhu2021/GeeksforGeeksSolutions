/* Structure of class Node is
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}*/

class Solution
{
    boolean isPalindrome(Node head) 
    {
        Stack<Integer> s = new Stack<Integer>();
        Node node = head;
        while(node != null) {
            s.push(node.data);
            node = node.next;
        }
        node = head;
        while(node != null) {
            int d = s.pop();
            if(d != node.data) {
                return false;
            }
            node = node.next;
        }
        return true;
    }
}
