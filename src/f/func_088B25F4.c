#include "common.h"
void func_088B2384(s32 *, void *);
void func_088B238C(s32 *, void *);
void func_088B240C(s32 *, void *, s32, s32);

void func_088B25F4(u8 *arg0) {
    s32 temp;
    s32 temp1;
    s32 temp2;
    func_088B238C(&temp1, arg0 + 0x71C);
    func_088B2384(&temp2, arg0 + 0x71C);
    func_088B240C(&temp, arg0 + 0x71C, temp1, temp2);
}
