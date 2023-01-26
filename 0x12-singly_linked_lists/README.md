# Singly linked lists
A data structure is not only used for organizing the data. It is also used for processing, retrieving, and storing data. There are different basic and advanced types of data structures that are used in almost every program or software system that has been developed. So we must have good knowledge about data structures. So, in this project we see singly linked lists which is a linear data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure.
# Requirements
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options Wall -Werror -Wextra -pedantic -std = gnu89
* All your files should end with a new line
# Resource
```
Please use this data structure for this project:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}

```