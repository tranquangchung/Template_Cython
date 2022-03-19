from libcpp.list cimport list

cdef extern from "lib_c/lib.h":
    void printlist(list[int] &)

def list_test(list[int] l):
    printlist(l)
