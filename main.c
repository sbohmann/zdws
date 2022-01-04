#include "linereader.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void LineReader_read(struct LineReader *pReader);

void handleLine(const char *line) {
    if (puts(line) == EOF) {
        exit(errno);
    }
}

int main() {
    struct LineReaderConfiguration configuration = {
            .handleLine = handleLine
    };
    struct LineReader *lineReader = createLineReader(1, configuration);
    LineReader_read(lineReader);
}
