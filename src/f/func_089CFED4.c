#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x11558];
    s32 unk_11560;
    u8 pad_11564[8];
    u8 unk_1156C;
    u8 pad_1156D[3];
    s32 unk_11570;
    u8 pad_11574[8];
    s32 unk_1157C;
    s32 unk_11580;
} Unk_089CFED4;

extern u8 *D_08AD1F14[];
s32 func_089A8B74(u8 *, s32);
void func_089D0E50(u8 *, s32, s32, s32, ...);
void func_089D1904(void *, s32, s32);

void func_089CFED4(Unk_089CFED4 *arg0, s32 arg1, s32 arg2) {
    u8 *q;
    u8 *p;
    s32 n;
    s32 v;
    s32 m;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    p = &(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)[0x2460];
    q = arg0->unk_08;
    func_089D1904(q, 0, -1);
    arg0->unk_1156C = 1;
    v = arg0->unk_11560;
    n = 0;
    switch (v) {
    case 0:
    case 1:
    case 2:
        arg0->unk_1156C = 0;
        break;
    case 4:
        n = 0x40001;
        arg0->unk_11570 = 3;
        break;
    case 5:
        arg0->unk_1156C = 0;
        arg0->unk_11570 = 0;
        break;
    case 6:
        n = 0x40002;
        arg0->unk_11570 = 0;
        break;
    case 7:
        n = 0x40003;
        arg0->unk_11570 = 3;
        break;
    case 8:
        n = 0x40004;
        arg0->unk_11570 = 3;
        break;
    case 9:
        n = 0x40005;
        arg0->unk_11570 = 2;
        break;
    case 10:
        n = 0x40006;
        arg0->unk_11570 = 2;
        break;
    case 12:
        n = 0x40007;
        arg0->unk_11570 = 2;
        break;
    case 11:
        n = 0x40008;
        arg0->unk_11570 = 0;
        break;
    case 13:
    case 14:
    case 15:
        n = 0x40009;
        arg0->unk_11570 = 0;
        break;
    case 16:
        n = 0x4000b;
        arg0->unk_11570 = 2;
        break;
    case 17:
        n = 0x4000b;
        arg0->unk_11570 = 2;
        break;
    case 18:
        n = 0x4000c;
        arg0->unk_11570 = 2;
        break;
    case 19:
        n = 0x4000d;
        arg0->unk_11570 = 0;
        break;
    case 20:
        n = 0x4000e;
        arg0->unk_11570 = 2;
        break;
    case 21:
        n = 0x4000f;
        arg0->unk_11570 = 2;
        break;
    case 22:
        n = 0x40010;
        arg0->unk_11570 = 3;
        break;
    case 23:
        n = 0x40011;
        arg0->unk_11570 = 2;
        break;
    case 24:
        n = 0x40012;
        arg0->unk_11570 = 2;
        break;
    case 25:
        n = 0x40013;
        arg0->unk_11570 = 3;
        break;
    case 26:
        n = 0x40014;
        arg0->unk_11570 = 3;
        break;
    case 27:
        n = 0x40015;
        arg0->unk_11570 = 2;
        break;
    case 28:
        n = 0x40016;
        arg0->unk_11570 = 0;
        break;
    case 29:
        arg0->unk_1156C = 0;
        arg0->unk_11570 = 0;
        break;
    case 3:
    case 30:
    case 31:
    default:
        arg0->unk_1156C = 0;
        arg0->unk_11570 = 0;
        break;
    }

    m = -1;
    if (arg0->unk_1156C != 0) {
        switch (arg0->unk_11570) {
        case 0:
            a = func_089A8B74(p, 0x40000);
            b = func_089A8B74(p, n);
            func_089D0E50(q, a, b, 0);
            break;
        case 1:
            a = func_089A8B74(p, 0x40000);
            b = func_089A8B74(p, n);
            c = func_089A8B74(p, 0x20000);
            d = func_089A8B74(p, 0x20001);
            func_089D0E50(q, a, b, 2, c, d);
            m = 0;
            break;
        case 2:
            a = func_089A8B74(p, 0x40000);
            b = func_089A8B74(p, n);
            c = func_089A8B74(p, 0x20000);
            d = func_089A8B74(p, 0x20001);
            func_089D0E50(q, a, b, 2, c, d);
            m = 1;
            break;
        case 3:
            a = func_089A8B74(p, 0x40000);
            b = func_089A8B74(p, n);
            c = func_089A8B74(p, 0x20000);
            func_089D0E50(q, a, b, 1, c);
            m = 0;
            break;
        }
        func_089D1904(q, 1, m);
    }
    arg0->unk_1157C = arg1;
    arg0->unk_11580 = arg2;
}
