#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E_08976744;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0xC];
    E_08976744 unk_20[8];
    u8 unk_120[0x100];
    u8 unk_220[0x28];
    u8 unk_248[0x28];
    u8 unk_270[0x30];
} Sub_08976744;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    Sub_08976744 unk_10;
    void *unk_2B0;
} S_08976744;

void func_0880406C(void *, void *, void *, s32, s32);
void func_0885C520(Sub_08976744 *);
void func_08976C30(Sub_08976744 *);
void func_08976DF4(void *);
void func_08976E34(void *);
void func_08976EF4(void);
void func_08976F64(void);
void func_08976F88(E_08976744 *);
void func_08976FAC(void *);
void func_08977074(S_08976744 *);
extern u8 D_08A47F88[];
extern u8 D_08A47FB0[];

S_08976744 *func_08976744(S_08976744 *arg0) {
    Sub_08976744 *s;
    E_08976744 *p;

    arg0->unk_2B0 = D_08A47F88;
    arg0->unk_04 = 0;
    arg0->unk_00 = 0;
    s = &arg0->unk_10;
    func_0885C520(s);
    s->unk_00 = D_08A47FB0;
    func_08976FAC(&s->unk_10);
    p = s->unk_20;
    do {
        func_08976F88(p);
        p++;
    } while (p < s->unk_20 + 8);
    func_0880406C(s->unk_120, func_08976F64, func_08976EF4, 0x20, 8);
    func_08976E34(s->unk_220);
    func_08976E34(s->unk_248);
    func_08976DF4(s->unk_270);
    func_08976C30(s);
    s->unk_10 = 8;
    func_08977074(arg0);
    return arg0;
}
