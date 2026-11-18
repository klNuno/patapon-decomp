#include "common.h"

typedef struct T08870CFC {
    struct T08870CFC *unk_00;
    struct T08870CFC *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08870CFC;

typedef struct {
    s32 unk_00;
} I08870CFC;

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    s32 unk_08;
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    u8 unk_20[0x8200];
    u8 unk_8220[0x1040];
    T08870CFC unk_9260;
    T08870CFC unk_9288;
} T;

void func_088704AC(I08870CFC *, T08870CFC *);
void func_088704A4(I08870CFC *, T08870CFC *);
s32 func_088703E8(I08870CFC *, I08870CFC *);
void func_088702D0(I08870CFC *, I08870CFC *, s32);
void func_0887043C(I08870CFC *, T08870CFC *, s32);
void func_0886FF60(Node *, Node *);

s32 func_08870A54(T *arg0) {
    I08870CFC it0, end0, tmp0, cur0;
    I08870CFC it1, end1, tmp1, cur1;
    s32 i;
    T *p;
    T *q;
    Node *n;
    u8 *v;
    s32 f;

    arg0->unk_18 = 0x82;
    arg0->unk_14 = 0;
    func_088704AC(&it0, &arg0->unk_9260);
    func_088704A4(&end0, &arg0->unk_9260);
    while (func_088703E8(&it0, &end0) != 0) {
        func_088702D0(&cur0, &it0, 0);
        func_0887043C(&tmp0, &arg0->unk_9260, cur0.unk_00);
    }
    arg0->unk_9260.unk_20 = 0;
    arg0->unk_9260.unk_04 = &arg0->unk_9260;
    arg0->unk_9260.unk_00 = &arg0->unk_9260;
    func_088704AC(&it1, &arg0->unk_9288);
    func_088704A4(&end1, &arg0->unk_9288);
    while (func_088703E8(&it1, &end1) != 0) {
        func_088702D0(&cur1, &it1, 0);
        func_0887043C(&tmp1, &arg0->unk_9288, cur1.unk_00);
    }
    arg0->unk_9288.unk_20 = 0;
    arg0->unk_9288.unk_04 = &arg0->unk_9288;
    arg0->unk_9288.unk_00 = &arg0->unk_9288;
    i = 0;
    p = arg0;
    q = arg0;
    do {
        n = (Node *)q->unk_8220;
        v = p->unk_20;
        if (n->unk_0C != NULL) {
            func_0886FF60(n->unk_0C, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = (s32)v;
        if ((Node *)&arg0->unk_9288 != n) {
            T08870CFC *h = arg0->unk_9288.unk_00;
            if (h != &arg0->unk_9288) {
                n->unk_00 = (Node *)h;
                arg0->unk_9288.unk_00->unk_04 = (T08870CFC *)n;
                arg0->unk_9288.unk_00 = (T08870CFC *)n;
                f = 1;
            } else {
                arg0->unk_9288.unk_00 = (T08870CFC *)n;
                arg0->unk_9288.unk_04 = (T08870CFC *)n;
                n->unk_00 = (Node *)&arg0->unk_9288;
                f = 1;
            }
            n->unk_04 = (Node *)&arg0->unk_9288;
            if (f != 0) {
                n->unk_0C = (Node *)&arg0->unk_9288;
                arg0->unk_9288.unk_20++;
            }
        }
        i++;
        p = (T *)((u8 *)p + 0x100);
        q = (T *)((u8 *)q + 0x20);
    } while (i < 0x82);
    return 1;
}
