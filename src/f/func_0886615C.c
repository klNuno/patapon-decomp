#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 *unk_40;
    s32 unk_44;
    u8 pad_48[0x4];
    s32 unk_4C;
    u8 pad_50[0x4];
    f32 unk_54;
    u8 pad_58[0x8];
    u8 unk_60[1];
} S_0886615C;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088154A8(s32);
void func_0881587C(s32, s32);
void func_08857754(void);
void func_088577AC(void);
void func_08857C14(void *);
void func_08858024(s32);
void func_0885807C(void);
void func_088580F8(void);
void func_0893E71C(void *, s32, s32);

void func_0886615C(S_0886615C *arg0) {
    s32 temp;

    temp = arg0->unk_44;
    if (temp & 0xFF000000) {
        if (arg0->unk_40 != NULL && *arg0->unk_40 != 0) {
            if (temp != -1) {
                func_08814BB4(0xA);
                func_08814BB4(0xB);
                func_088154A8(arg0->unk_44);
            }
            func_0881587C(0, 0);
            func_08858024(1);
            func_0885807C();
            func_08857C14(arg0);
            func_088577AC();
            func_0893E71C(arg0->unk_60, arg0->unk_4C, (s32)arg0->unk_54);
            func_08857754();
            func_088580F8();
            func_08858024(2);
            func_08857754();
            func_08814C0C(0xA);
            func_088154A8(-1);
        }
    }
}
