#include "common.h"

typedef struct L_088813A8 {
    struct L_088813A8 *unk_00;
    struct L_088813A8 *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} L_088813A8;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    f32 unk_04;
    char unk_08[0x1F];
    u8 unk_27;
} C_088813A8;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0xC];
    u8 unk_20[0x2400];
    u8 unk_2420[0x2000];
    u8 unk_4420[0x28];
    u8 unk_4448[0x28];
    C_088813A8 unk_4470;
} B_088813A8;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    L_088813A8 unk_30;
    L_088813A8 unk_58;
    s32 unk_80;
    u8 unk_84;
    u8 pad_85[3];
    s32 unk_88;
    u8 unk_8C;
    u8 pad_8D[3];
    B_088813A8 unk_90;
} S_088813A8;

extern u8 D_08A45350[];
extern u8 D_08A45398[];
extern char D_089F9AC0[];
void func_0881F5C0(void *, s32, s32);
void func_08880754(L_088813A8 *);
void func_0888065C(L_088813A8 *);
void func_0885C520(B_088813A8 *);
void func_08882198(void *);
void func_0880406C(void *, void *, void *, s32, s32);
void func_0888215C(void);
void func_088820EC(void);
void func_088820C8(void);
void func_08882058(void);
void func_08881F98(void *);
void func_08881F58(void *);
void func_08881D84(B_088813A8 *);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);

S_088813A8 *func_088813A8(S_088813A8 *arg0) {
    L_088813A8 *l;
    B_088813A8 *b;

    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    func_0881F5C0(arg0, 0, 0x24);
    l = &arg0->unk_30;
    arg0->unk_30.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    l = &arg0->unk_58;
    arg0->unk_58.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    arg0->unk_80 = 0;
    arg0->unk_84 = 0;
    arg0->unk_88 = 0;
    arg0->unk_8C = 0;
    b = &arg0->unk_90;
    func_0885C520(b);
    b->unk_00 = D_08A45398;
    func_08882198(&b->unk_10);
    func_0880406C(b->unk_20, func_0888215C, func_088820EC, 0x24, 0x100);
    func_0880406C(b->unk_2420, func_088820C8, func_08882058, 0x20, 0x100);
    func_08881F98(b->unk_4420);
    func_08881F98(b->unk_4448);
    func_08881F58(&b->unk_4470);
    func_08881D84(b);
    b->unk_10 = 0x100;
    arg0->unk_90.unk_4470.unk_04 = 0.8f;
    arg0->unk_90.unk_4470.unk_00 = 1;
    func_08822BC4(D_089F9AC0);
    func_08822D5C(arg0->unk_90.unk_4470.unk_08, D_089F9AC0, 0x1F);
    arg0->unk_90.unk_4470.unk_27 = 0;
    return arg0;
}
