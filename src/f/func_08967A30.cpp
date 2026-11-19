#include "common.h"

extern "C" {
void *func_08827A50(s32, s32);
void *func_08967CB0(void *, s32, s32);

typedef struct {
    u8 unk_00[0x10];
} U;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x1C];
    s32 unk_20;
    u8 pad_24[0x8DA0];
    u8 unk_8DC4[1];
} T;

void func_08967AEC(U *, void *, s32);
void func_08967AA8(U *, void *);
void func_08967864(U *, s32);
void func_08967B50(T *);

void func_08967A30(T *arg0)
{
    U temp;
    void *ptr = func_08827A50(0x450, arg0->unk_00);
    if (ptr != 0) {
        ptr = func_08967CB0(ptr, arg0->unk_00, arg0->unk_20);
    }
    func_08967AEC(&temp, ptr, arg0->unk_00);
    func_08967AA8(&temp, arg0->unk_8DC4);
    func_08967864(&temp, -1);
    func_08967B50(arg0);
}
}
