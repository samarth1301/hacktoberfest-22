/*For a given singly linked list of integers, find and return its length. Do it using an iterative method.*/



int length(Node *head)
{
    int count=0;
    Node *temp = head;
    while(temp!=NULL){    
          count++;
          temp=temp->next;
    }
    //Write your code here
    return count;
}
