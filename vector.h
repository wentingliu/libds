#ifndef __LIBDS_VECTOR_H__
#define __LIBDS_VECTOR_H__

/* A C implementation of a vector, or dynamically expanding array. */

#include <stdlib.h>
#include <stdbool.h>

#define BASE_CAP 10
#define EXPAND_RATIO 1.5

struct vector{
    bool copy_data;
	void** data;
	int * sizes;
	int length;
	int capacity;
	void (*destructor)(void*);
};

typedef struct vector * vector_p;

/* Create a vector object. It must be eventually destroyed by a call to 
   destroy_vector to avoid memory leaks. The flag copy_data indicates whether 
   the value of an item should be copied or not when it is added to list */
vector_p create_vector(bool copy_data);
/* Create a new vector that is composed of the items in the old vector with
   indices in the range of [start,end) */
vector_p subvector(vector_p vec, int start, int end);
/* Add an item to the end of the vector */
void vector_add(vector_p vec, void* data, int n);
/* Get the item at index i of the vector */
void* vector_get(vector_p vec, int i);
/* Set the item at index i of the vector to the data provided. */
int vector_set(vector_p vec, int i, void* data, int n);
/* Insert the data at index i of the vector and shift the other 
   items to the right. */
int vector_insert(vector_p vec, int i, void* data, int n);
/* Get the index of the item in the vector that is equal to the data. 
   Equality is defined as having the same bytes in memory. */
int vector_index(vector_p vec, void* data, int n);
/* Remove the item at index i of the vector and free its memory if flag copy_data is set to true */
void vector_remove(vector_p vec, int i);
/* Check to make sure there is still room in the vector and expand it if 
   necessary. This function is not meant to be called directly. */
void check_length(vector_p vec);
/* Destroy the vector and free all the memory associated with it. */
void destroy_vector(vector_p vec);
/* Swaps the pointers at indices i and j in the vector */
void vector_swap(vector_p vec, int i, int j);


#endif
