#include <iostream>
#include <initializer_list>

template<typename Type>
class List {
public:
	List() :start_(nullptr), end_(nullptr), size_(0) {}
	explicit List(size_t size);
	List(std::initializer_list<Type>obj);
	List(const List& other) {
		avto current = other.start_;
		size_ = 0;
		while (size_ != other.size_)
		{
			this->push_back(current->getData());
			current = current->getNext();
		}
		//Node tmp(Type());
	}
	List(List&& other);
	~List() {
		avto current = start_;
		while(size_)
		{
			current = start_->getNext;
			delete start_;
			start_ = current;
		}
	}
	List& operator=(const List& other);
	List& operetor = (List && other);
	Type& operator[](size_t index);
	const Type& operator[](size_t index) const;
	Type& at(size_t index);
	const Type& at(size_t index) const;
	Type& back();
	Type& front();
	const Type& back()const;
	const Type& front()const;
	void push_back(const Type& other);
	void push_front(const Type& other);
	void pop_back();
	void pop_front();
	void insert(const Type&, size_t index);
	void erase(size_t index);





private:
	class Node {
	public:
		Node(const Type& date) : data_(date), next(nullptr), prev_(nullptr) {}
		Node(const Type& data, Node* next, Node* prev) : data_(data), next_(next), prev_(prev){}
		~Node() = default;
		
		void setDate(const Type& data)
		{
			this->data_ = data;
		}
		void setNext(Node* next)
		{
			this->next_ = next;
		}
		void setPrev(Node* prev)
		{
			this->prev_ = prev;
		}

		Type& getData()
		{
			return data_;
		}
		const Type& getData() const
		{
			return data_;
		}
		Type getNext()const
		{
			return next_;
		}
		Type getPrev() const
		{
			return prev_;
		}
	};
private:
	Node* end_;
	Node* start_;
	size_t size_;
};





int main()
{
	std::cout << "Hello Word!\n";
}

template<typename Type>
List<Type>& List<Type>::operator=(const List& other)
{
	for (int i = 0; i < size; i++)
	{
		if (strcat_ )
	}

}

template<typename Type>
void List<Type>::push_back(const Type& other)
{
	Node* res = new Node{}



	size_ += 1;
}
