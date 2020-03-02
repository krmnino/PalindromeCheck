#pragma once

template<typename T> class Node {
private:
	int data;
	Node* next;
public:
	Node(T d) : data(d), next(nullptr) {}
	void set_data(T d);
	void set_next(Node* n);
	T get_data();
	Node* get_next();
};

template<typename T> void Node<T>::set_data(T d) {
	this->data = d;
}
template<typename T> void Node<T>::set_next(Node* n) {
	this->next = n;
}
template<typename T> T Node<T>::get_data() {
	return this->data;
}
template<typename T> Node<T>* Node<T>::get_next() {
	return this->next;
}