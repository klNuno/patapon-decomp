#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} O;

void func_0880416C(void *);
void func_08924D18(O *);
extern u8 D_08A46E64[];

O *func_08924CC0(O *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_0C = D_08A46E64;
        func_08924D18(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
