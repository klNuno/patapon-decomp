#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s8 unk_14[0x40];
} E;

typedef struct {
    E unk_00[10];
} A;

void func_08822B3C(s8 *, s8 *);
void func_0897CD60(A *, s32);
extern s8 D_08A058A0[];
extern s8 D_08A058B0[];
extern s8 D_08A058BC[];
extern s8 D_08A058C8[];
extern s8 D_08A058D4[];
extern s8 D_08A058E4[];
extern s8 D_08A058F4[];
extern s8 D_08A05908[];
extern s8 D_08A05918[];
extern s8 D_08A05928[];

void func_0897CAB0(A *arg0) {
    arg0->unk_00[0].unk_00 = 0.45f;
    arg0->unk_00[0].unk_04 = 0.45f;
    arg0->unk_00[0].unk_08 = 0;
    arg0->unk_00[0].unk_0C = 0;
    arg0->unk_00[0].unk_10 = 0;
    func_08822B3C(arg0->unk_00[0].unk_14, D_08A058A0);
    arg0->unk_00[1].unk_00 = 0.85f;
    arg0->unk_00[1].unk_04 = 0.85f;
    arg0->unk_00[1].unk_08 = 0;
    arg0->unk_00[1].unk_0C = 0;
    arg0->unk_00[1].unk_10 = 1;
    func_08822B3C(arg0->unk_00[1].unk_14, D_08A058B0);
    arg0->unk_00[2].unk_00 = 1.0f;
    arg0->unk_00[2].unk_04 = 1.0f;
    arg0->unk_00[2].unk_08 = 0;
    arg0->unk_00[2].unk_0C = 0;
    arg0->unk_00[2].unk_10 = 2;
    func_08822B3C(arg0->unk_00[2].unk_14, D_08A058BC);
    arg0->unk_00[3].unk_00 = 0.7f;
    arg0->unk_00[3].unk_04 = 0.7f;
    arg0->unk_00[3].unk_08 = 0;
    arg0->unk_00[3].unk_0C = 0;
    arg0->unk_00[3].unk_10 = 3;
    func_08822B3C(arg0->unk_00[3].unk_14, D_08A058C8);
    arg0->unk_00[4].unk_00 = 1.0f;
    arg0->unk_00[4].unk_04 = 1.0f;
    arg0->unk_00[4].unk_08 = 0;
    arg0->unk_00[4].unk_0C = 0;
    arg0->unk_00[4].unk_10 = 8;
    func_08822B3C(arg0->unk_00[4].unk_14, D_08A058D4);
    arg0->unk_00[5].unk_00 = 1.0f;
    arg0->unk_00[5].unk_04 = 1.0f;
    arg0->unk_00[5].unk_08 = 0;
    arg0->unk_00[5].unk_0C = 0;
    arg0->unk_00[5].unk_10 = 9;
    func_08822B3C(arg0->unk_00[5].unk_14, D_08A058E4);
    arg0->unk_00[6].unk_00 = 0.6f;
    arg0->unk_00[6].unk_04 = 0.6f;
    arg0->unk_00[6].unk_08 = 0;
    arg0->unk_00[6].unk_0C = 0;
    arg0->unk_00[6].unk_10 = 10;
    func_08822B3C(arg0->unk_00[6].unk_14, D_08A058F4);
    arg0->unk_00[7].unk_00 = 0.85f;
    arg0->unk_00[7].unk_04 = 0.85f;
    arg0->unk_00[7].unk_08 = 0;
    arg0->unk_00[7].unk_0C = 0;
    arg0->unk_00[7].unk_10 = 11;
    func_08822B3C(arg0->unk_00[7].unk_14, D_08A05908);
    arg0->unk_00[8].unk_00 = 0.7f;
    arg0->unk_00[8].unk_04 = 0.7f;
    arg0->unk_00[8].unk_08 = 0;
    arg0->unk_00[8].unk_0C = 0;
    arg0->unk_00[8].unk_10 = 12;
    func_08822B3C(arg0->unk_00[8].unk_14, D_08A05918);
    arg0->unk_00[9].unk_00 = 1.0f;
    arg0->unk_00[9].unk_04 = 1.0f;
    arg0->unk_00[9].unk_08 = 0;
    arg0->unk_00[9].unk_0C = 0;
    arg0->unk_00[9].unk_10 = 12;
    func_08822B3C(arg0->unk_00[9].unk_14, D_08A05928);
    func_0897CD60(arg0, -1);
}
