#include <Python.h>
#include <stdio.h>

/**
 * print_python_list_info - Prints some basic info about Python lists from
 *  Python.h lib
 * @p: Pointer to the PyObject list
 */
void print_python_list_info(PyObject *p)
{
	Py_ssize_t size, i;
	PyObject *obj;

	size = PyList_Size(p);
	printf("[*] Size of the Python List = %ld\n", size);

	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		obj = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(obj)->tp_name);
	}
}
