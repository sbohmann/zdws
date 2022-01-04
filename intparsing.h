#pragma once

#include <stdint.h>
#include "string.h"

int8_t parseInt8(struct String *text);

uint8_t parseUInt8(struct String *text);

int16_t parseInt16(struct String *text);

uint16_t parseUInt16(struct String *text);

int32_t parseInt32(struct String *text);

uint32_t parseUInt32(struct String *text);

int64_t parseInt64(struct String *text);

uint64_t parseUInt64(struct String *text);
