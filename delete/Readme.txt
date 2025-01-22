we can use pointer deletion in 2 ways.
1. pointer allocated to dynamically allocated memory.
2. pointer allocated to local memory of the function.

In dynamically allocated memory:
we need to delete the pointer as the memory allocated previously dynamically from heap will not be freed untill delete is called.

In local memory allocated:
when we are deleting a memory allocated to a local variable, it will show undefined behaviour, as that memory is allocated to the local variable.
