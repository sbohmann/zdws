#pragma once

#include <stddef.h>
#include "chararray.h"

struct String;

struct String * createString(const char *value);

struct String * createStringFromCharArray(struct CharArray *source, size_t offset, size_t length);

size_t String_length(struct String *self);

void String_print(struct String *self, int fd);

void String_println(struct String *self, int fd);
