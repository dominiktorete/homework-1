//#include <iostream>
//#include <deque>
//#include <unordered_map>
//class Node {
//
//public:
//	Node* prev;
//	Node* left;
//	Node* right;
//	int data;
//	Node() {
//		left = nullptr;
//		right = nullptr;
//		prev = nullptr;
//	}
//	Node(int data_){
//		data = data_;
//		left = nullptr;
//		right = nullptr;
//		prev = nullptr;
//	}
//	~Node() {
//	}
//};
//
//class Tree {
//
//public:	
//	Node* root = nullptr;
//	Tree(){}
//	~Tree() {
//		Node* next;
//		std::deque<Node*> del;
//		del.push_front(root);
//		while(!del.empty()){
//			Node* next = del.front();
//			std::cout << "Delete: " << next->data << std::endl;
//			if (next->left)
//				del.push_back(next->left);
//			if (next->right)
//				del.push_back(next->right);
//			delete del.front();
//			del.front() = nullptr;
//			del.pop_front();
//		}
//	}
//	Node* append(Node* p,int data_) {
//		if (!p) {
//			Node* app = new Node(data_);
//			app->prev = p;
//			p = app;
//		}
//		else if (data_ < p->data) {
//			p->left = append(p->left, data_);
//		}
//		else if (data_ > p->data) {
//			p->right = append(p->right, data_);
//		}
//		return p;
//	}
//	void printlnr(Node* p) {
//		if (!p)return;
//		
//		printlnr(p->left);
//		std::cout << p->data << " ";
//		printlnr(p->right);
//		
//	}
//	
//	
//	void BFS(Node* start)
//	{
//		std::deque<Node*> q;
//		q.push_back(start);
//		while (q.size() != 0)
//		{
//			Node* next = q.front();
//			// you may want to print the current node here or do other processing
//			std::cout << next->data << " ";
//			q.pop_front();
//			if (next->left)
//				q.push_back(next->left);
//			if (next->right)
//				q.push_back(next->right);
//		}
//	}
//};
//
//int main() {
//	Tree tr;
//	int arr[7]{ 5, 12, 11, 13, 2, 4, 3 };
//	for (int i = 0; i < 7; i++) {
//		tr.root = tr.append(tr.root, arr[i]);
//	}
//	tr.BFS(tr.root);
//	//tr.printlnr(tr.root);
//}