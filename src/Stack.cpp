#include <iostream>
#include "Node.cpp"

template<typename T>class Stack {
private:
	Node<T>* head;
	int size;
public:
	Stack() : size(0), head(nullptr) {};
	~Stack() {}
	void push(T);
	T pop();
	T peek();
	bool is_empty();
};

template<typename T> void Stack<T>::push(T data) {
	Node<T>* n = new Node<T>(data);
	n->set_next(this->head);
	this->head = n;
	this->size++;
}

template<typename T> T Stack<T>::pop() {
	if (this->is_empty()) {
		return NULL;
	}
	Node<T>* n = this->head;
	this->head = this->head->get_next();
	this->size--;
	return n->get_data();
}
template<typename T> T Stack<T>::peek() {
	return this->head;
}
template<typename T> bool Stack<T>::is_empty() {
	if (this->size == 0 && this->head == nullptr) {
		return true;
	}
	return false;
}
