#pragma once

struct LineReader;

struct LineReaderConfiguration {
    void (*handleLine)(const char *line);
    void (*handleEndOfLines)();
};

struct LineReader * createLineReader(int fileDescriptor, struct LineReaderConfiguration configuration);

void LineReader_read(struct LineReader *self);
