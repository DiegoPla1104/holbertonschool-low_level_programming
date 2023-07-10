#ifndef
#define dog
struct User
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct User dog;

	dog.name = "Poppy";
	dog.age = "3.5";
	dog.owner = "Bob";
	return (0);
}
#endif
