//#include <iostream>
//
//class Node {
//public:
//	Node* prev = nullptr;
//	Node* next = nullptr;
//	int value;
//	Node(int val_) : value(val_) {
//	}
//};
//class List {
//	Node* head = nullptr;
//	Node* tail = head;
//public:
//	List(){}
//	~List() {
//		while (head != NULL) {
//			pop_front();
//		}
//	}
//	Node* get_index(int index) {
//		Node* ptr = head;
//		int i = 0;
//		while (ptr && i != index) {
//			ptr = ptr->next;
//			i++;
//		}
//		if (i == index)return ptr;
//		else nullptr;
//	}
//	int operator [](int index) {
//		return get_index(index)->value;
//	}
//	void push_front(int data) {
//		Node* ptr = new Node(data);
//		if (head == nullptr) {
//			head = ptr;
//			tail = ptr;
//		}
//		ptr->next = head;
//		head->prev = ptr;
//		head = ptr;
//	}
//	void pop_front() {
//		
//		if (head == nullptr) {
//			return;
//		}
//		if (head == tail) {
//			delete head;
//			head = nullptr;
//			tail = nullptr;
//			return;
//		}
//		Node* ptr = head -> next;
//		if (ptr == nullptr) {
//			delete head;
//			head = nullptr;
//			return;
//		}
//		delete head;
//		head = ptr;
//		
//	}
//	void insert(int index, int data) {
//		if (index == 0) {
//			push_front(data);
//			return;
//		}
//		
//		Node* ptrindex = get_index(index - 1);
//		if (ptrindex == nullptr || ptrindex->next == nullptr)return;
//		if (ptrindex == tail) {
//			push_back(data);
//			return;
//		}
//		Node* ptr = new Node(data);
//		ptrindex->next->prev = ptr;
//		ptr->next = ptrindex->next;
//		ptr->prev = ptrindex;
//		ptrindex->next = ptr;
//
//	}
//	void erase(int index) {
//		if (index == 0) {
//			pop_front();
//			return;
//		}
//
//		Node* ptrindex = get_index(index - 1);
//		if (ptrindex == nullptr || ptrindex->next == nullptr)return;
//		if (ptrindex == tail) {
//			pop_back();
//			return;
//		}
//		Node* ptrindex2 = ptrindex->next->next;
//		if (ptrindex2) {
//			delete ptrindex->next;
//			ptrindex->next = ptrindex2;
//			ptrindex2->prev = ptrindex;
//		}
//		else pop_back();
//	}
//	void push_back(int data) {
//		Node* ptr = new Node(data);
//		if (tail == nullptr) {
//			tail = ptr;
//			head = ptr;
//		}
//		tail->next = ptr;
//		ptr->prev = tail;
//		tail = ptr;
//	}
//	void pop_back() {
//		
//		if (tail == nullptr) {
//			return;
//		}
//		if (tail == head) {
//			delete tail;
//			head = nullptr;
//			tail = nullptr;
//			return;
//		}
//		Node* ptr = tail->prev;
//		if (ptr == nullptr) {
//			delete tail;
//			tail = nullptr;
//			return;
//		}
//		delete tail;
//		ptr->next = nullptr;
//		tail = ptr;
//	}
//};
//namespace N
//{
//	int m = 15;
//}
//int main() {
//	List l;
//	l.push_back(27);
//	l.push_front(15);
//	l.push_back(30);
//	l.insert(2, 11);
//	l.erase(0);
//	std::cout << l[0] << " " << l[1] << " " << l[2];
//	l.pop_front();
//	l.pop_back();
//	std::cout << l[0];
//	l.pop_front();
//	l.pop_front();
//	l.pop_back();
//	l.pop_front();
//
//
//
//	return 0;
//}