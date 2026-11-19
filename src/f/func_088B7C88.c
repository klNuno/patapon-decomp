#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
} S;

extern s32 func_0887ED78(s32, s32);
extern s32 func_0887ED88(s32, s32);
extern V D_089DFF04[];
extern s32 D_08AD6960[];
extern s32 D_08AD6964[];
extern s32 D_08AD6968[];
extern s32 D_08AD6970[];
extern s32 D_08AD6974[];
extern s32 D_08AD6978[];
extern V D_08AD697C[];

void func_088B7C88(S *arg0, s32 arg1) {
    if (D_08AD6970[0] == 0) {
        V *temp = &D_08AD697C[D_08AD6978[0]];
        if (func_0887ED78(arg1, 0x10)) {
            temp->unk_04 -= 1.0f;
        }
        if (func_0887ED78(arg1, 0x40)) {
            temp->unk_04 += 1.0f;
        }
        if (func_0887ED78(arg1, 0x80)) {
            temp->unk_00 -= 1.0f;
        }
        if (func_0887ED78(arg1, 0x20)) {
            temp->unk_00 += 1.0f;
        }
        if (func_0887ED78(arg1, 0x8000)) {
            temp->unk_08 += 1.0f;
        }
        if (func_0887ED78(arg1, 0x1000)) {
            temp->unk_08 -= 1.0f;
        }
        if (func_0887ED88(arg1, 0x8000)) {
            s32 index = D_08AD6978[0] + 1;
            if (index >= 16) {
                index = 0;
            }
            D_08AD6978[0] = index;
        }
        if (func_0887ED88(arg1, 0x4000)) {
            s32 index = D_08AD6978[0] - 1;
            if (index < 0) {
                index = 15;
            }
            D_08AD6978[0] = index;
        }
    } else {
        if (func_0887ED78(arg1, 0x10)) {
            f32 temp = *(f32 *)D_08AD6964;
            temp += 1.0f;
            *(f32 *)D_08AD6964 = temp;
            if (temp >= 360.0f) {
                D_08AD6964[0] = 0;
            }
        }
        if (func_0887ED78(arg1, 0x40)) {
            f32 temp = *(f32 *)D_08AD6964 - 1.0f;
            *(f32 *)D_08AD6964 = temp;
            if (temp < 0.0f) {
                temp += 360.0f;
                *(f32 *)D_08AD6964 = temp;
            }
        }
        if (func_0887ED78(arg1, 0x80)) {
            f32 temp = *(f32 *)D_08AD6968;
            temp += 1.0f;
            *(f32 *)D_08AD6968 = temp;
            if (temp >= 360.0f) {
                D_08AD6968[0] = 0;
            }
        }
        if (func_0887ED78(arg1, 0x20)) {
            f32 temp = *(f32 *)D_08AD6968 - 1.0f;
            *(f32 *)D_08AD6968 = temp;
            if (temp < 0.0f) {
                temp += 360.0f;
                *(f32 *)D_08AD6968 = temp;
            }
        }
        if (func_0887ED78(arg1, 0x8000)) {
            *(f32 *)D_08AD6960 += 1.0f;
        }
        if (func_0887ED78(arg1, 0x1000)) {
            *(f32 *)D_08AD6960 -= 1.0f;
        }
    }
    if (func_0887ED88(arg1, 0x1000)) {
        s32 index = D_08AD6970[0] + 1;
        if (index >= 2) {
            index = 0;
        }
        D_08AD6970[0] = index;
    }
    if (func_0887ED88(arg1, 0x2000)) {
        s32 index = D_08AD6974[0] + 1;
        if (index >= 3) {
            index = 0;
        }
        D_08AD6974[0] = index;
    }
    if (func_0887ED88(arg1, 1)) {
        s32 i;
        for (i = 0; i < 16; i++) {
            D_08AD697C[i].unk_00 = 25.0f * D_089DFF04[i].unk_00;
            D_08AD697C[i].unk_04 = 25.0f * D_089DFF04[i].unk_04;
            D_08AD697C[i].unk_08 = 25.0f * D_089DFF04[i].unk_08;
        }
    }
    arg0->unk_100 = 0xFFFFFF;
    if (!func_0887ED88(arg1, 1)) {
        arg0->unk_100 = 0xFFFFFF;
    }
}
