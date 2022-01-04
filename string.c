#include <stdlib.h>
#include <string.h>
#include "string.h"

struct String {
    char *data;
    size_t length;
};

struct String * createString(const char *value) {
    struct String *self = malloc(sizeof(struct String));
    size_t length = strlen(value);
    size_t size = length + 1;
    self->data = malloc(size);
    memcpy(self->data, value, size);
    return self;
}

struct String * createStringFromCharArray(struct CharArray *source, size_t offset, size_t length) {
    struct String *self = malloc(sizeof(struct String));
    size_t size = length + 1;
    self->data = malloc(size);
    CharArray_copyTo(self->data, offset, length);
    self->data[length] = 0;
    return self;
}

size_t String_length(struct String *self) {
    return self->length;
}
