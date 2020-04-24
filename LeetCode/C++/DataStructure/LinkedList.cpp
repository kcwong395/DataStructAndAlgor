class MyLinkedList {
public:
	/** Initialize your data structure here. */
	struct Node {
		int val;
		Node* next;
		Node(int val) {
			this->val = val;
		}
	};

	Node *head;
	Node *tail;
	int size;

	MyLinkedList() {
		this->head = nullptr;
		this->tail = nullptr;
		this->size = 0;
	}

	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
	int get(int index) {

		// precondition index >= 0
		if (index >= size) return -1;

		Node *tmp = head;
		for (int i = 0; i < index; i++) {
			tmp = tmp->next;
		}

		return tmp->val;
	}

	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
	void addAtHead(int val) {
		Node *tmp = new Node(val);
		tmp->next = head;
		head = tmp;
		if (size == 0) {
			tail = head;
		}
		size++;
	}

	/** Append a node of value val to the last element of the linked list. */
	void addAtTail(int val) {

		Node *tmp = new Node(val);
		if (size == 0) {
			head = tail = tmp;
		}
		else {
			tail->next = tmp;
			tail = tmp;
		}
		size++;
	}

	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
	void addAtIndex(int index, int val) {
		// precondition index >= 0
		if (index > size) return;

		if (index == 0) {
			addAtHead(val);
		}
		else if (index == size) {
			addAtTail(val);
		}
		else {
			Node *tmp = new Node(val);
			Node *cur = head;
			for (int i = 0; i < index - 1; i++) {
				cur = cur->next;
			}
			Node *post = cur->next;
			cur->next = tmp;
			tmp->next = post;
			size++;
		}
	}

	/** Delete the index-th node in the linked list, if the index is valid. */
	void deleteAtIndex(int index) {

		// precondition index >= 0
		if (index >= size) return;

		if (size == 1) {
			delete head;
			head = tail = nullptr;
		}
		else if (index == 0) {
			Node *tmp = head;
			head = head->next;
			delete tmp;
		}
		else if (index == size - 1) {
			delete tail;
			Node *tmp = head;
			for (int i = 0; i < index - 1; i++) {
				tmp = tmp->next;
			}
			tail = tmp;
		}
		else {
			Node *cur = head;
			for (int i = 0; i < index - 1; i++) {
				cur = cur->next;
			}
			Node *post = cur->next;
			cur->next = post->next;
			delete post;
		}

		size--;
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