#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08;
    u8 pad_09[0x193];
    u8 unk_19C;
    u8 pad_19D[0x23];
    u8 *unk_1C0;
} T;

extern void func_0880416C(void *);
void func_089404D0(void *, s16);
void func_0894046C(void *, s16);
extern u8 D_08A474C8[];

T *func_089403F4(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1C0 = D_08A474C8;
        if (&arg0->unk_08 != NULL) {
            func_089404D0(&arg0->unk_19C, 0);
            func_0894046C(&arg0->unk_08, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
