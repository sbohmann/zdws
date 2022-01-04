#pragma once

#include <stddef.h>

struct CharArray;

struct CharArray * createCharArray(size_t size);

size_t CharArray_size(struct CharArray *self);

char CharArray_get(struct CharArray *self, size_t index);

void CharArray_set(struct CharArray *self, size_t index, char value);

void CharArray_copyTo(char *destination, size_t offset, size_t length);
