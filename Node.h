#pragma once
class Node
{
private:
	int key;
	int bal; // thuoc tinh co gia tri can bang 0.can bang - 1.lech trai - 2.lech phai
	Node* left;
	Node* right;
	Node* parent;
public:
	Node();
	Node(int);
	virtual ~Node();
	Node* GetLeft() { return left; }
	Node* GetRight() { return right; }
	Node* GetParent() { return parent; }
	int GetKey() { return key; }
	void SetLeft(Node* val) { left = val; }
	void SetRight(Node* val) { right = val; }
	void SetParent(Node* val) { parent = val; }
	void SetKey(int val) { key = val; }
};
