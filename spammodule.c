#include <Python.h>
static PyObject *
spam_system(PyObject *self ,PyObject *args)
{
    const char *commond;
    int sts;

    if(!PyArg_ParseTuple(args,'s',&command))
        return NULL;
    sts=system(commond);
    return Py_BuildValue('i',sts);
}
