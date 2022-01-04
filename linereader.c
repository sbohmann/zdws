#include "linereader.h"

#include <stdlib.h>

struct LineReader {
    int fileDescriptor;
    void (*handleLine)(const char *line);
    void (*handleEndOfLines)();
};

struct LineReader * createLineReader(int fileDescriptor, struct LineReaderConfiguration configuration) {
    struct LineReader *self = malloc(sizeof(struct LineReader));
    (*self) = (struct LineReader) {
            .fileDescriptor = fileDescriptor,
//            .handleLine = configuration.handleLine,
            .handleEndOfLines = configuration.handleEndOfLines
    };
    return self;
}

void LineReader_read(struct LineReader *self) {
}
