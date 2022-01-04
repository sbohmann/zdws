#include <execinfo.h>
#include "fail.h"

enum Constexpr { MAXIMUM_BACKTRACE_LENGTH = 1024 };

_Noreturn
void fail(struct String *message) {
    String_println(message, 2);
    int backtraceLength;
    void *array[MAXIMUM_BACKTRACE_LENGTH];
    backtraceLength = backtrace(array, MAXIMUM_BACKTRACE_LENGTH);
    backtrace_symbols_fd(array, backtraceLength, 2);
    exit(1);
}
