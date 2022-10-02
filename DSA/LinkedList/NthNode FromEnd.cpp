/*Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there are 9 nodes in linked list and we need to find 2nd node from end.
2nd node from end is 8.  
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
      Node* temp = head;
       int cnt = 0;
  //the variable cnt is used to keep a track of the position, cnt is incremented till it reaches the end of the list.
       while(temp!=NULL){
           cnt++;
           temp = temp->next;
       }
  
  //if n>cnt -> the length of list is smaller than the value of n 
       if(n > cnt){
           return -1;
       }
  //nth element or node from end -> xth element from beginning where x=cnt-n 
       int x = cnt-n;
       Node* temp1 = head;
  //this loop is used for traversing from the start till xth position is reached. temp1 stops when it reaches xth position.
       for(int i=1;i<cnt-n+1;i++){
           temp1=temp1->next;
       }
       return temp1->data;
       
}
