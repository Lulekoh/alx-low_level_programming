#0x1A-hash_tables
//** In this project, I learned about hashing by implementing hash functions and hash tables in C. **//
# Header File :file_folder:
[hash_tables.h](./hash_tables.h): Header file containing definitions and prototypes for all types and functions written for the project.
#files, descriptions and functions/prototypes
0. >>> ht = {}
Write a function that creates a hash table.
#file: 0-hash_table_create.c >> hash_table_t *hash_table_create(unsigned long int size);
1. djb2
Write a hash function implementing the djb2 algorithm.
#file: 1-djb2.c >> unsigned long int hash_djb2(const unsigned char *str);
2. key -> index
Write a function that gives you the index of a key.
#file: 2-key_index.c >> unsigned long int key_index(const unsigned char *key, unsigned long int size);
3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.
#file: 3-hash_table_set.c >> int hash_table_set(hash_table_t *ht, const char *key, const char *value);
4. >>> ht['betty']
Write a function that retrieves a value associated with a key.
#file: 4-hash_table_get.c >> char *hash_table_get(const hash_table_t *ht, const char *key);
5. >>> print(ht)
Write a function that prints a hash table.
#file: 5-hash_table_print.c >> void hash_table_print(const hash_table_t *ht);
6. >>> del ht
Write a function that deletes a hash table.
#file: 6-hash_table_delete.c >> void hash_table_delete(hash_table_t *ht);

#test code files/compiling
0-main.c
1-main.c
2-main.c
3-main.c
4-main.c
5-main.c
6-main.c
