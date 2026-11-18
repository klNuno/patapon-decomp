#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
} B_0892C27C;

typedef struct T_0892C27C {
    u8 pad_00[0x2A4];
    struct T_0892C27C *unk_2A4;
    u8 pad_2A8[0x50];
    s32 unk_2F8;
    u8 pad_2FC[0xCC];
    B_0892C27C unk_3C8;
} T_0892C27C;

u8 func_0892C494(B_0892C27C *);

s32 func_0892C27C(T_0892C27C *arg0) {
    T_0892C27C *p5;
    T_0892C27C *p4;
    T_0892C27C *p3;
    T_0892C27C *p2;
    T_0892C27C *p1;
    T_0892C27C *p0;
    u8 r;

    p5 = arg0->unk_2A4;
    if (p5 != NULL) {
        p4 = p5->unk_2A4;
        if (p4 != NULL) {
            p3 = p4->unk_2A4;
            if (p3 != NULL) {
                p2 = p3->unk_2A4;
                if (p2 != NULL) {
                    p1 = p2->unk_2A4;
                    if (p1 != NULL) {
                        p0 = p1->unk_2A4;
                        if (p0 != NULL) {
                            if (p0->unk_2A4 != NULL && func_0892C27C(p0->unk_2A4)) {
                                r = 1;
                            } else {
                                r = p0->unk_2F8 == 0 || func_0892C494(&p0->unk_3C8) == 1;
                            }
                            if (r) {
                                r = 1;
                                goto L5;
                            }
                        }
                        r = p1->unk_2F8 == 0 || p1->unk_3C8.unk_10 == 1;
L5:;
                        if (r) {
                            r = 1;
                            goto L4;
                        }
                    }
                    r = p2->unk_2F8 == 0 || p2->unk_3C8.unk_10 == 1;
L4:;
                    if (r) {
                        r = 1;
                        goto L3;
                    }
                }
                r = p3->unk_2F8 == 0 || p3->unk_3C8.unk_10 == 1;
L3:;
                if (r) {
                    r = 1;
                    goto L2;
                }
            }
            r = p4->unk_2F8 == 0 || p4->unk_3C8.unk_10 == 1;
L2:;
            if (r) {
                r = 1;
                goto L1;
            }
        }
        r = p5->unk_2F8 == 0 || p5->unk_3C8.unk_10 == 1;
L1:;
        if (r) {
            return 1;
        }
    }
    return arg0->unk_2F8 == 0 || arg0->unk_3C8.unk_10 == 1;
}
