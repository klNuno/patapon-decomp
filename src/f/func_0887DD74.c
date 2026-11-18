#include "common.h"

typedef struct {
    u8 pad_00[0x44];
} M_0887DD74;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4_0887DD74;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3_0887DD74;

typedef struct {
    V4_0887DD74 unk_00;
    V4_0887DD74 unk_10;
    u8 pad_20[0xB0];
    f32 unk_D0;
    f32 unk_D4;
    f32 unk_D8;
    f32 unk_DC;
    f32 unk_E0;
    u8 unk_E4;
} S_0887DD74;

void func_08854F60(f32, V4_0887DD74 *, V4_0887DD74 *);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(M_0887DD74 *, s32);
void func_08877760(M_0887DD74 *, V3_0887DD74 *, V4_0887DD74 *);

void func_0887DD74(S_0887DD74 *arg0) {
    V3_0887DD74 r;
    M_0887DD74 m;
    V4_0887DD74 q;
    V4_0887DD74 t;
    V4_0887DD74 u;
    f32 x;
    f32 y;

    if (arg0->unk_E4 == 0) {
        r.unk_08 = arg0->unk_E0;
        r.unk_00 = 0.0f;
        r.unk_04 = 0.0f;
        y = arg0->unk_D4;
        x = arg0->unk_D0;
        q.unk_00 = x;
        q.unk_04 = y;
        q.unk_0C = 1.0f;
        q.unk_08 = 0.0f;
        func_08877760(&m, &r, &q);
        func_08866B54(arg0, 0, func_08866B80(&m, 0));
        func_08866B54(arg0, 1, func_08866B80(&m, 1));
        func_08866B54(arg0, 2, func_08866B80(&m, 2));
        func_08866B54(arg0, 3, func_08866B80(&m, 3));
        func_08854F60(arg0->unk_D8, &t, &arg0->unk_00);
        arg0->unk_00.unk_00 = t.unk_00;
        arg0->unk_00.unk_04 = t.unk_04;
        arg0->unk_00.unk_08 = t.unk_08;
        arg0->unk_00.unk_0C = t.unk_0C;
        func_08854F60(arg0->unk_DC, &u, &arg0->unk_10);
        arg0->unk_10.unk_00 = u.unk_00;
        arg0->unk_10.unk_04 = u.unk_04;
        arg0->unk_10.unk_08 = u.unk_08;
        arg0->unk_10.unk_0C = u.unk_0C;
        arg0->unk_E4 = 1;
    }
}
