#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
} T0;

typedef struct {
    u8 pad_00[0xC90];
    s32 unk_C90;
    u8 pad_C94[0x20];
    s32 *unk_CB4;
    s32 unk_CB8;
} T1;

extern s32 func_08985828(s32, s32);
void func_0898ABB8(void *, f32, s32, s32);
extern s32 D_08A097B8[];
extern s32 D_08A097BC[];
extern s32 D_08A097C0[];

s32 func_089C8794(T1 *arg0, s32 arg1) {
    s32 *temp;
    s32 temp0 = 0;

    if (arg1 == 0) {
        return temp0;
    }
    switch (arg1) {
    case 1:
        arg0->unk_C90 = (s32)(f32)(s32)((T0 *)func_08985828((s32)arg0, 2))->unk_54;
        func_0898ABB8((void *)func_08985828((s32)arg0, 2), 0.0f, 18, 0);
        temp = &arg0->unk_CB4[arg0->unk_CB8];
        if (temp != NULL) {
            *temp = D_08A097B8[0];
        }
        temp0 = 1;
        ++arg0->unk_CB8;
        break;
    case 2:
        arg0->unk_C90 = (s32)(f32)(s32)((T0 *)func_08985828((s32)arg0, 1))->unk_54;
        func_0898ABB8((void *)func_08985828((s32)arg0, 1), 0.0f, 17, 0);
        temp = &arg0->unk_CB4[arg0->unk_CB8];
        if (temp != NULL) {
            *temp = D_08A097BC[0];
        }
        temp0 = 1;
        ++arg0->unk_CB8;
        break;
    case 3:
        arg0->unk_C90 = (s32)(f32)(s32)((T0 *)func_08985828((s32)arg0, 1))->unk_54;
        func_0898ABB8((void *)func_08985828((s32)arg0, 1), 0.0f, 19, 0);
        temp = &arg0->unk_CB4[arg0->unk_CB8];
        if (temp != NULL) {
            *temp = D_08A097C0[0];
        }
        temp0 = 1;
        ++arg0->unk_CB8;
        break;
    }
    return temp0;
}
