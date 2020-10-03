#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: is the key of a value ex. name
 * @size: the size of the hash table
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
