#include <iostream>
#include "Node.cpp"
#include "Stack.cpp"

bool is_palindrome(Stack<char>* s, std::string word) {
	for (int i = 0; i < word.length(); i++) {
		if (word[i] != s->pop()) {
			return false;
		}
	}
	return true;
}

int main() {
	Stack<char>* s = new Stack<char>();
	std::string word = "rotatora";
	for (int i = 0; i < word.length(); i++) {
		s->push(word[i]);
	}
	std::cout << is_palindrome(s, word);
}