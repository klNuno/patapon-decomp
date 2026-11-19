#include "common.h"

typedef struct {
    u8 pad_00[0x2C4];
    u8 unk_2C4[0x20];
    s32 unk_2E4;
} T;

void func_088D6BA8(void **, void *);
void func_088D6BB0(void **, void *);
void func_088D6C30(void **, void *, void *, void *);

void func_088D6E14(T *arg0, s32 arg1) {
    void *temp2;
    void *temp0;
    void *temp1;

    func_088D6BB0(&temp0, arg0->unk_2C4);
    func_088D6BA8(&temp1, arg0->unk_2C4);
    func_088D6C30(&temp2, arg0->unk_2C4, temp0, temp1);
    arg0->unk_2E4 = arg1;
}
