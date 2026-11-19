#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_088883E8;

extern u8 D_08A44B14[];
extern u8 D_08A45484[];
void func_0880416C(void *);

Unk_088883E8 *func_088883E8(Unk_088883E8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A45484;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A44B14;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
