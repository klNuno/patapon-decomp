#include "common.h"

typedef struct C_088901E4 C_088901E4;

typedef struct {
    u8 pad_00[0x3B0];
    u8 unk_3B0[0x80];
    void *unk_430;
} T;

s32 func_0888E218(void *, C_088901E4 *);
void func_088900F4(void *, void *);
void func_088A87E8(void *, void *);

void func_088900AC(T *arg0, C_088901E4 *arg1) {
    u32 temp[0x20];
    void *ptr;

    func_0888E218(temp, arg1);
    func_088900F4(arg0->unk_3B0, temp);
    ptr = arg0->unk_3B0;
    arg0->unk_430 = ptr;
    if (ptr != NULL) {
        func_088A87E8(ptr, arg0);
    }
}
