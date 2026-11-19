#include "common.h"

extern "C" {
void func_0887FE50(void *, void *, void **, s32);
void func_0887FE38(void *, s32);
void func_0887FE40(void *);
void func_0887FEF4(void *, s32);

typedef struct {
    u8 pad_00[0x30];
    u32 unk_30;
    u8 pad_34[0xC];
    u32 unk_40;
} T;

void func_08911770(void *arg0, T *arg1)
{
    void *temp;
    void *value;
    void *ptr;
    u32 off = arg1->unk_40;
    if (off == 0) {
        value = 0;
    } else {
        value = (u8 *)arg1 + off;
    }
    temp = value;
    off = arg1->unk_30;
    ptr = off == 0 ? 0 : (u8 *)arg1 + off;
    func_0887FE50(arg0, ptr, &temp, 0);
    func_0887FE38(arg0, 1);
    func_0887FE40(arg0);
    func_0887FEF4(arg0, 0);
}
}
