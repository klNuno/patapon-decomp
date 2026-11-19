#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} T;

extern u8 D_08A45140[];
void func_0880416C(void *);

T *func_0887543C(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_04 = D_08A45140;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
