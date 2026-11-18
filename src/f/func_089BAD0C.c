#include "common.h"

typedef struct {
    u8 unk_00[5][0x90];
    s32 unk_2D0;
    s32 unk_2D4;
    u8 pad_2D8[8];
    s32 unk_2E0;
    s32 unk_2E4;
    f32 *unk_2E8;
    u8 pad_2EC[0xC];
    f32 unk_2F8;
    f32 unk_2FC;
} T;

void func_08865EE0(void *);
void func_088AF260(void *, s32);
void func_088F232C(void *, s32);

T *func_089BAD0C(T *arg0) {
    f32 *temp;
    func_08865EE0(arg0->unk_00[0]);
    func_08865EE0(arg0->unk_00[1]);
    func_08865EE0(arg0->unk_00[2]);
    func_08865EE0(arg0->unk_00[3]);
    func_08865EE0(arg0->unk_00[4]);
    arg0->unk_2D0 = 0;
    arg0->unk_2D4 = 0;
    func_088F232C(&arg0->unk_2E0, 1);
    func_088AF260(&arg0->unk_2E0, 1);
    arg0->unk_2E4 = 0;
    temp = arg0->unk_2E8;
    arg0->unk_2F8 = 16.0f - temp[0];
    arg0->unk_2FC = 16.0f - temp[1];
    return arg0;
}
