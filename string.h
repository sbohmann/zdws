#pragma once

#include <stddef.h>

struct String;

struct String createStringFromCString(const char *value);

struct String createStringFromArray(struct Array *source, size_t offset, size_t length);
