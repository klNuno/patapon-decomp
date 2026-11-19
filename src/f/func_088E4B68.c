#include "common.h"

void func_088E4F98(u8 *, s32);
void func_088E5150(u8 *, s32);
void func_0890AA8C(s32, s32, s32, s32);

typedef struct {
    u8 pad_00[0xEC];
    u8 unk_EC;
    u8 pad_ED[0x1D3];
    u8 unk_2C0;
} T;

void func_088E4B68(T *arg0) {
    func_088E4F98((u8 *)arg0, 0);
    func_088E5150((u8 *)arg0, 0);
    if (arg0->unk_EC != 0) {
        func_0890AA8C((s32)&arg0->unk_2C0, 0, 1, 1);
    }
}
