#include "common.h"

typedef struct {
    u8 pad_00[0x3F0];
    u8 unk_3F0[0x1F0];
    u8 unk_5E0;
} T;

void func_088E4F98(u8 *, s32);
void func_088E5150(u8 *, s32);
void func_0890A494(u8 *, s32, s32, s32);

void func_088F95BC(T *arg0) {
    func_088E4F98((u8 *)arg0, 0);
    func_088E5150((u8 *)arg0, 0);
    func_0890A494(arg0->unk_3F0, 1, 2, 0);
    arg0->unk_5E0 = 0;
}
