#pragma once
#ifndef _LINKED_ELEMENT_H_
#define _LINKED_ELEMENT_H_
#include "Element.h"
class LinkedElement : public Element //элемент с одним указателем на другой элемент
{
private:
	LinkedElement* _left;
	LinkedElement* _right;
public:
	LinkedElement() : Element(0), _left(nullptr), _right(nullptr) {}
	explicit LinkedElement(int val)
		: Element(val), _left(nullptr), _right(nullptr) {}
	~LinkedElement() = default;
	LinkedElement* left_ptr() const { return _left; }
	LinkedElement* right_ptr() const { return _right; }
	LinkedElement* operator++();
	void set_left_ptr(LinkedElement* ptr) { _left = ptr; }
	void set_right_ptr(LinkedElement* ptr) { _right = ptr; }
};
#endif