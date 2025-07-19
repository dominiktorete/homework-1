//#include <iostream>
//#include <string>
//template<typename T>
//class Node {
//public:
//	T value;
//	Node* next;
//	Node(T _val) :value(_val), next(nullptr){}
//};
//template<typename T>
//class List {
//	Node<T>* head;
//    Node<T>*tail;
//public:
//	List() {
//		head = nullptr;
//		tail = nullptr;
//	}
//	~List() {
//		while (head) {
//			pop_front();
//		}
//	}
//	Node<T>* get_at(int index) {
//		int i = 0;
//		if (index == 0) return head;
//		Node<T>* node = head;
//		while (i < index && node && node->next) {
//			node = node->next;
//			i++;
//		}
//		return (i == index) ? node : nullptr;
//		
//	}
//	Node<T>* begin() {
//		if(head)
//			return head;
//	}
//	Node<T>* end() {
//		if (tail)
//			return tail;
//	}
//	void insert(int index, T k) {
//		if (index < 0)return;
//		if (index == 0) {
//			push_front(k);
//			return;
//		}
//		Node<T>* left = get_at(index-1);
//		if (left == nullptr)return;
//		Node<T>* right = left -> next;
//		Node<T>* node = new Node<T>(k);
//		left->next = node;
//		node->next = right;
//		if (right == nullptr) tail = node;
//	}
//	void erase(int index) {
//		if (index < 0)return;
//		if (index == 0) {
//			pop_front();
//			return;
//		}
//		Node<T>* left = get_at(index-1);
//		if (left == nullptr)return;
//		Node<T>* node = left->next;
//		Node<T>* right = node->next;
//		left->next = right;
//		delete node;
//		if (right == nullptr) tail = left;
//	}
//	void push_front(T k) {
//		Node<T>* node = new Node<T>(k);
//		if (head == nullptr) {
//			head = node;
//			tail = node;
//		}
//		else {
//			node->next = head;
//			head = node;
//		}
//	}
//	void pop_front() {
//		if (head == nullptr) {
//			return;
//		}
//		else if (head == tail) {
//			delete head;
//			tail = nullptr;
//			head = nullptr;
//			return;
//		}
//		else {
//			Node<T>* node = head->next;
//			delete head;
//			head = node;
//		}
//
//	}
//	void push_back(T k) {
//		Node<T>* node = new Node<T>(k);
//		if (tail == nullptr) {
//			head = node;
//			tail = node;
//		}
//		else {
//			tail->next = node;
//			tail = node;
//			tail->next = nullptr;
//		}
//	}
//	void pop_back() {
//		if (tail == nullptr) {
//			return;
//		}
//		else if (head == tail) {
//			delete tail;
//			tail = nullptr;
//			head = nullptr;
//			return;
//		}
//		else {
//			Node<T>* node = head;
//			for (; node->next != tail; node = node->next);
//			delete tail;
//			tail = node;
//			tail->next = nullptr;
//		}
//
//	}
//	
//};
//int main() {
//	List<std::string> ones;
//	ones.push_front("'1'");
//	ones.push_front("'5'");
//	ones.push_front("'3'");
//	ones.insert(0, "'4'");
//	ones.push_back("'2'");
//	ones.erase(1);
//	std::cout << ones.get_at(0)->value;
//	return 0;
//}