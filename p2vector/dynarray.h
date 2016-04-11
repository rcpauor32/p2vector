#ifndef __DYNARRAY_H__
#define __DYNARRAY_H__

#define DYNARRAY_BLOCK_SIZE 16

typedef unsigned int uint;

template <class T>

class DynArray {
private:
	T* buffer;
	uint capacity;
	uint num_elements;


public:
	DynArray() :
		capacity(DYNARRAY_BLOCK_SIZE),
		num_elements(0)
	{
		buffer = new T[DYNARRAY_BLOCK_SIZE];
	}

	DynArray(uint n_elements) :
		capacity(DYNARRAY_BLOCK_SIZE * (n_elements / DYNARRAY_BLOCK_SIZE + 1)),
		num_elements(0)
	{
		buffer = new T[capacity];
	}

	DynArray(T* vector) {
		
	}

	DynArray(const DynArray &Tvect) :
		num_elements(Tvect.num_elements),
		capacity(Tvect.capacity)
	{
		buffer = new T[capacity];
		for (int i = 0; i < capacity; i++) {
			buffer[i] = Tvect.buffer[i];
		}

	}

	virtual ~DynArray(){}

public:
	T* GetBuffer() const {
		return buffer;
	}

};

#endif