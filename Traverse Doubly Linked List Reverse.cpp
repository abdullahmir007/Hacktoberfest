// Function to traverse and print the doubly linked list in reverse order
void traverseDoublyLinkedListReverse(Node* head) {
    cout << "Doubly Linked List elements in reverse order: ";
    Node* temp = head;
    // Traverse to the end of the list
    while (temp != nullptr && temp->next != nullptr) {
        temp = temp->next;
    }
    // Traverse the list in reverse direction and print elements
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, data;

    // User-defined input for the doubly linked list
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> data;
        head = insertEnd(head, data);
    }

    // Traverse and print the doubly linked list in reverse order
    traverseDoublyLinkedListReverse(head);

    // Free allocated memory (not shown in this example)
    // ...
    
    return 0;
}
