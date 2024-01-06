#if !defined MATRICI_H
#define MATRICI_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* mat_replicate(const struct matrix* m);

#endif /*MATRICI_H*/