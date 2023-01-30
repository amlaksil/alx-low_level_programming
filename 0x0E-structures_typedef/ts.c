#include <stdlib.h>
#include <stdio.h>

struct class
{
	/*char *name;
	char *brand; */
	int emid;
	char emp[12];
};
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int main(void)
{
	struct class object;
	int x = 0;
	dog_t *p;
	#if x > 0
	printf("the sizeof(emid) = %ld\n", sizeof(object.emid));
	printf("the sizeof(emp) = %ld\n", sizeof(object.emp));
	printf("the sizeof(class) = %ld\n", sizeof(object));

	printf("the sizeof(dog_t) = %ld\n", sizeof(dog_t));
	printf("the sizeof(p->name) = %ld\n", sizeof((*p).name));
	printf("the sizeof(p->owner) = %ld\n", sizeof((*p).owner));
	#endif
	char *s = "silamlak";
	int i;
	for (i = 0; s[i] != '\0';)
		i++;
	printf("the length of \"silamlak\" %d\n", i);
	return (0);

}
