/**
 * print_name -> is a function that prints name
 *
 * @name: the character string
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
