#include "common.h"

typedef struct {
    u8 pad_00[8];
} L_0893CEA8;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

extern s32 D_08AD6970[];
extern s32 D_08AD6974[];
extern V D_08AD6958[];
extern void *D_089DFEFC[];
extern void *D_089DFEF0[];
extern char D_089FB5A4[];

void func_08858024(s32);
void func_088576F8(void);
void func_08858F88(void *, s32, s32, void *);
void func_08864A30(L_0893CEA8 *);
void func_088155E4(s32);
s32 func_08814C0C(s32);
void func_08814BB4(s32);
extern s32 func_088581B0(s32);
void func_08857B68(V *);
void func_088578C8(f32);
void func_08857940(f32);
void func_088579B8(f32);
void func_088B7778(void);
void func_088B78C8(void);
void func_08864A68(L_0893CEA8 *, s32);

void func_088B81E8(void *arg0) {
    L_0893CEA8 temp_98;
    u32 temp_50[18];
    u32 temp_10[16];

    func_08858024(1);
    func_088576F8();
    func_08858F88(arg0, 5, 3, D_089FB5A4);
    func_08858F88(arg0, 8, 8, D_089DFEFC[D_08AD6970[0]]);
    func_08858F88(arg0, 0x10, 8, D_089DFEF0[D_08AD6974[0]]);
    func_08864A30(&temp_98);
    func_088155E4(1);
    func_08814C0C(9);
    func_08814C0C(10);
    func_08814C0C(11);
    func_08814C0C(1);
    func_08814C0C(0);
    func_08814C0C(1);
    func_08814BB4(4);
    func_088576F8();
    func_088581B0((s32)temp_50);
    func_08857B68(D_08AD6958);
    func_088578C8(3.1415927f * D_08AD6958[1].unk_00 / 180.0f);
    func_08857940(3.1415927f * D_08AD6958[1].unk_04 / 180.0f);
    func_088579B8(3.1415927f * D_08AD6958[1].unk_08 / 180.0f);
    func_088581B0((s32)temp_10);
    func_088B7778();
    if (D_08AD6970[0] == 0) {
        func_088B78C8();
    }
    func_08864A68(&temp_98, -1);
}
