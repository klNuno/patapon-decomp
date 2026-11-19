#include "common.h"

void func_0880416C(void *);
void func_088580F8(void);
extern u8 D_08A44B30[];

void **func_088649D8(void **arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A44B30;
        func_088580F8();
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
