#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0xA0];
    s32 unk_B0;
    void *unk_B4;
} Obj_088B3A04;

void func_0880416C(void *);
void func_08880778(void *, s32);
void func_08880CDC(void *, s32);
void func_088825A4(s32, void *);
extern u8 D_08A45D08[];

Obj_088B3A04 *func_088B3A04(Obj_088B3A04 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_B4 = D_08A45D08;
        if (arg0->unk_00 != 0) {
            func_08880CDC(arg0->unk_10, arg0->unk_B0);
            arg0->unk_B0 = 0;
            func_088825A4(arg0->unk_00, arg0->unk_10);
        }
        func_08880778(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
