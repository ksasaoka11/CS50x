/**
 * Declares a dictionary's functionality.
 */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>

#include "trie.h"

// maximum length for a word
// (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
#define LENGTH 45

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word);

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary);

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void);

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void);

/**
 * private helper function that recursively implements unload
 * to free any memory alloacted via malloc
 */
bool _unload(TrieNode *node);

/**
 * private helper function that recursively traverses trie
 * and determines the valid words in the trie
 */
void _size(int *size, TrieNode *node);

#endif // DICTIONARY_H
