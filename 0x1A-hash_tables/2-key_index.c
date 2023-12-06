#include "hash_tables.h"

/**
 * key_index - jhhhhhh
 * @key: jhggffff
 * @size: hjkjjkk
 *
 * Return: lolll
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

