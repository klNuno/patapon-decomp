#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x24];
    void *unk_28;
    u8 pad_2C[0x1F];
    u8 unk_4B;
} T;

extern u8 D_08A445D8[];
void func_08804150(void *);
void func_0880416C(void *);
void *func_08807250(void *arg0, s16 arg1);

T *func_088084E4(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A445D8;
        if (arg0->unk_4B != 0) {
            func_08804150(arg0->unk_28);
        }
        func_08807250(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
