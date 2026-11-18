#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
    u8 pad_8D1[0xF];
    s32 unk_8E0;
} B;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} R_089C97B8;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x160];
    B *unk_164;
    u8 pad_168[4];
    s32 unk_16C;
    u8 pad_170[0xD48];
    s32 unk_EB8;
} S_089C97B8;

R_089C97B8 *func_089C0588(void *);
extern s32 func_08985828(s32, s32);
void func_0898ABB8(s32, s32, s32, f32);
s32 func_088DEDAC(s32, s32);
void func_0892DFA0(B *, char *);
void func_088D450C(B *, s32);
extern char D_089F37C8[];

void func_089C95F4(S_089C97B8 *arg0, s32 arg1, void *arg2) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    temp = func_089C0588(arg2)->unk_04;
    if (temp != arg0->unk_EB8 && temp == 0x10003) {
        if (arg0->unk_16C < 2) {
            temp2 = func_08985828((s32)arg0, 0);
            func_0898ABB8(temp2, 0xB, 0, 0.0f);
            func_0898ABB8(temp2, 6, 1, 2.0f);
            temp3 = func_088DEDAC(arg0->unk_00, 0x106);
            if (arg0->unk_164 != NULL && temp3 != 0) {
                arg0->unk_164->unk_8D0 = 1;
                arg0->unk_164->unk_8E0 = 0x3840;
                func_0892DFA0(arg0->unk_164, D_089F37C8);
                func_088D450C(arg0->unk_164, temp3);
            }
        } else {
            temp2 = func_08985828((s32)arg0, 0);
            func_0898ABB8(temp2, 0xC, 0, 0.0f);
            func_0898ABB8(temp2, 5, 1, 2.0f);
            temp3 = func_088DEDAC(arg0->unk_00, 0x108);
            if (arg0->unk_164 != NULL && temp3 != 0) {
                arg0->unk_164->unk_8D0 = 1;
                arg0->unk_164->unk_8E0 = 0x3840;
                func_0892DFA0(arg0->unk_164, D_089F37C8);
                func_088D450C(arg0->unk_164, temp3);
            }
        }
        temp2 = func_08985828((s32)arg0, 0xB);
        func_0898ABB8(temp2, 6, 1, 0.0f);
        func_0898ABB8(temp2, 1, 1, 2.0f);
    }
}
