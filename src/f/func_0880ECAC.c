#include "common.h"

s32 func_0880DFC4(void);
extern s32 *func_0880ECF4(s32);
extern s32 func_0880ED14(s32);

s32 func_0880ECAC(s32 arg0) {
    if (func_0880DFC4() != 0) {
        return *func_0880ECF4(arg0);
    }
    return func_0880ED14(arg0) & 0xFF;
}
