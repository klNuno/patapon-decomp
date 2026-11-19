#include "common.h"

s32 func_08808A80(s32 *, s32 *);
s32 func_08808980(void);

s32 func_0880A6B8(s32 *arg0) {
    s32 temp = func_08808980();
    return func_08808A80(arg0, &temp) != 0 ? ~func_08808980() : *arg0;
}
