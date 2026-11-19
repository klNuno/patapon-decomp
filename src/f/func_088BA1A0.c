#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
    u8 pad_34[0xC];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
} T;

void func_088CEC68(T *);
extern u8 D_08A45E08[];

T *func_088BA1A0(T *arg0) {
    func_088CEC68(arg0);
    arg0->unk_30 = D_08A45E08;
    arg0->unk_40 = 1.0f;
    arg0->unk_44 = 1.0f;
    arg0->unk_48 = 1.0f;
    arg0->unk_4C = 1.0f;
    return arg0;
}
