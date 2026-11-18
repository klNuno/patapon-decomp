#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Vec_088830C8;

void func_088656E4(Vec_088830C8 *, void *, void *);
void func_08865708(void *, void *);
void func_08865720(Vec_088830C8 *, void *, void *);
void func_08883054(void *, Vec_088830C8 *, Vec_088830C8 *);

void func_088830C8(u8 *arg0, void *arg1, void *arg2) {
    Vec_088830C8 sp18;
    Vec_088830C8 sp10;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x60;
    func_08865708(temp_s0 + 0x18, arg2);
    func_08865708(temp_s0 + 0x10, arg1);
    func_088656E4(&sp18, temp_s0 + 0x10, temp_s0 + 0x18);
    func_08865720(&sp10, temp_s0 + 0x10, temp_s0 + 0x18);
    func_08883054(temp_s0, &sp18, &sp10);
    *(s32 *)(arg0 + 0x34) = 2;
}
