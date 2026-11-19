#include "common.h"

typedef struct { u8 pad_00[0x1C]; } T;
typedef struct {
    u8 pad_00[0x2A020];
    T unk_2A020;
} U;
extern void func_0886891C(void *, s32);
extern void func_0885DE4C(void *);

void func_088688C8(U *arg0) {
    s32 i;
    func_0886891C(arg0, 0xF);
    i = 0;
    do {
        func_0885DE4C(&arg0->unk_2A020);
        ++i;
        arg0 = (U *)((u8 *)arg0 + sizeof(T));
    } while (i < 0xE00);
}
