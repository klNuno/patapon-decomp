#include "common.h"

typedef struct T_08914CD0 T_08914CD0;

typedef struct {
    u8 unk_00[4];
    void *unk_04;
    void *unk_08;
    u8 unk_0C[4];
} T_089CE194;

typedef struct {
    u8 *unk_00;
    s32 unk_04;
    u8 unk_08[0x10A3C];
    u8 unk_10A44[0x2D0];
    u8 unk_10D14[0x824];
    void *unk_11538;
    u8 pad_1153C[4];
    s32 unk_11540;
    s32 unk_11544;
    u8 unk_11548;
    u8 pad_11549[3];
    s32 unk_1154C;
    u8 unk_11550;
    u8 unk_11551;
    u8 pad_11552[2];
    s32 unk_11554;
    s32 unk_11558;
    s32 unk_1155C;
    s32 unk_11560;
    s32 unk_11564;
    s32 unk_11568;
    u8 unk_1156C;
    u8 pad_1156D[3];
    s32 unk_11570;
    s32 unk_11574;
    s32 unk_11578;
    s32 unk_1157C;
    s32 unk_11580;
    u8 unk_11584;
    u8 unk_11585;
    u8 pad_11586[0x16];
    u8 unk_1159C;
    char unk_1159D[0x80];
    char unk_1161D[0x403];
    T_089CE194 unk_11A20;
} S_089CE450;

extern u8 D_08A48E78[];
extern char D_08A09E08[];
extern u8 D_089F46B8[];

s32 func_08859C04(void);
void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
void func_0881F120(void *, void *, s32);
void func_08913E3C(T_08914CD0 *, s32, s32);
void func_089B55A8(void *, s32);
void func_089D04CC(S_089CE450 *);
void func_089D05EC(void *);

S_089CE450 *func_089CE194(S_089CE450 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_00 = D_08A48E78;
    arg0->unk_04 = arg1;
    func_089D05EC(arg0->unk_08);
    func_089B55A8(arg0->unk_10A44, func_08859C04());
    func_08913E3C((T_08914CD0 *)arg0->unk_10D14, arg1, func_08859C04());
    arg0->unk_11540 = arg3;
    arg0->unk_11544 = 0;
    arg0->unk_11548 = 0;
    arg0->unk_1154C = 0;
    arg0->unk_11550 = 0;
    arg0->unk_11551 = 0;
    arg0->unk_11554 = 0;
    arg0->unk_11558 = 0;
    arg0->unk_1155C = 0;
    arg0->unk_11560 = 0;
    arg0->unk_11564 = 0;
    arg0->unk_11568 = 0;
    arg0->unk_1156C = 1;
    arg0->unk_11570 = 0;
    arg0->unk_11574 = 0;
    arg0->unk_11578 = 0;
    arg0->unk_1157C = 0;
    arg0->unk_11580 = 0;
    arg0->unk_11584 = 0;
    arg0->unk_11585 = 1;
    arg0->unk_1159C = 0;
    func_0881F5C0(arg0->unk_1159D, 0, 0x80);
    func_08822B3C(arg0->unk_1161D, D_08A09E08);
    func_0881F120(&arg0->unk_11A20, D_089F46B8, 0x10);
    arg0->unk_11A20.unk_04 = arg0->unk_1159D;
    arg0->unk_11A20.unk_08 = arg0->unk_1161D;
    arg0->unk_11538 = &arg0->unk_11A20;
    func_089D04CC(arg0);
    return arg0;
}
