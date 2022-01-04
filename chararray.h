#pragma once

#include <stddef.h>

struct CharArray;

struct CharArray * createArray(size_t size);

size_t CharArray_size(struct CharArray *self);

char CharArray_get(struct CharArray *self, size_t index);
