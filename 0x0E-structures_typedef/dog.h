#ifndef BLOCK
#define BLOCK
/**
 * struct dog - defines a type struct dog
 * @name: name
 * @owner: owner
 * @age: age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog doggo;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif