/**
 * struct dog - dog structure
 * @name: a pointer to a char
 * @age: a float variable
 * @owner: a pointer to a char
 */
struct dog {
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
