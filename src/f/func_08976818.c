#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E_08976818;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_08976818;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    E_08976818 unk_20[8];
    E_08976818 unk_120[8];
    M_08976818 unk_220;
    M_08976818 unk_248;
} S_08976818;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0888D59C(void *);
void func_0888D820(void *);
void func_0897696C(void *, void *);
void func_089769C4(void *, void *);
void func_089769CC(void *);
void func_08976AEC(void *);
void func_08976EF4(void *, s32);
extern u8 D_08A449F4[];
extern u8 D_08A47FA4[];
extern u8 D_08A47FB0[];

S_08976818 *func_08976818(S_08976818 *arg0, s16 arg1) {
    s32 i;
    E_08976818 *temp;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47FB0;
        func_0888D59C(&arg0->unk_248);
        func_0888D59C(&arg0->unk_220);
        func_08976AEC(arg0->unk_10);
        func_089769CC(&arg0->unk_220);
        func_089769CC(&arg0->unk_248);
        for (i = 0; i < 8; i++) {
            temp = &arg0->unk_120[i];
            func_0888D820(temp);
            func_089769C4(temp, &arg0->unk_20[i]);
            func_0897696C(&arg0->unk_248, temp);
        }
        func_0888D59C(&arg0->unk_248);
        if (&arg0->unk_248 != NULL) {
            arg0->unk_248.unk_24 = D_08A47FA4;
            func_089769CC(&arg0->unk_248);
            func_08976EF4(&arg0->unk_248, -1);
        }
        if (&arg0->unk_220 != NULL) {
            arg0->unk_220.unk_24 = D_08A47FA4;
            func_089769CC(&arg0->unk_220);
            func_08976EF4(&arg0->unk_220, -1);
        }
        func_08804000(arg0->unk_120, func_08976EF4, 0x20, 8);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
