#include "common.h"

extern void **func_08806388(void **);
extern s32 func_08806318(s32, char *);
extern u8 D_08A4473C[];

typedef struct {
    void *unk_00;
    u8 unk_04;
} T;

T *func_0880FE28(T *arg0, char *arg1) {
    func_08806388(&arg0->unk_00);
    arg0->unk_00 = D_08A4473C;
    func_08806318((s32)&arg0->unk_04, arg1);
    return arg0;
}
