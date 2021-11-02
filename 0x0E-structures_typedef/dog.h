#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name for struct
 * @name: variable for name
 * @owner: variable for owner
 * @age: variable for age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
