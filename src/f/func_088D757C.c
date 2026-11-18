#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_088D757C;

typedef struct N_088D757C {
    struct N_088D757C *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} N_088D757C;

typedef struct {
    u8 pad_00[0x2D20];
    s32 unk_2D20;
} O_088D757C;

typedef struct {
    u8 pad_00[0x2CF0];
    s32 unk_2CF0;
    s32 unk_2CF4;
} T_088D757C;

void func_088226BC(char *, char *, ...);
N_088D757C *func_088279EC(s32);
void func_08858D14(s32 *);
O_088D757C *func_0885D35C(T_088D757C *, char *);
O_088D757C *func_088CDA3C(T_088D757C *, char *, P_088D757C *, s32);
s32 func_0895B5A0(s32);
s32 func_0895B5A8(s32);
s32 func_0895B5B0(s32);
extern char D_089FBF1C[];
extern char D_089FBF24[];
extern char D_089FBF28[];
extern s32 D_08A7B970[];
extern u8 D_08AD7B20[];

s32 func_088D757C(T_088D757C *arg0) {
    char buf[0x100];
    s32 sp12C;
    P_088D757C p;
    char buf2[0x100];
    s32 h;
    s32 x;
    N_088D757C *n;
    O_088D757C *o;

    func_08858D14(&sp12C);
    switch (arg0->unk_2CF0) {
    case 0:
        p.unk_00 = 1;
        p.unk_04 = 0;
        h = D_08A7B970[arg0->unk_2CF4];
        x = func_0895B5B0(h);
        func_0895B5A0(h);
        for (n = func_088279EC(x); n->unk_08 != 2; n = n->unk_00) {
            if (*(u32 *)&n->unk_08 == 0) {
                p.unk_04 = 0;
                if (D_08AD7B20[0] != 0) {
                    func_088226BC(buf, D_089FBF1C, n->unk_14, n->unk_18);
                } else {
                    func_088226BC(buf, D_089FBF24, n->unk_14);
                }
                o = func_0885D35C(arg0, buf);
                if (o == NULL) {
                    func_0895B5A8(h);
                    o = func_088CDA3C(arg0, buf, &p, 0);
                    func_0895B5A0(h);
                }
                if (o != NULL) {
                    func_088226BC(buf2, D_089FBF28, n->unk_14, n->unk_18, (n->unk_10 + 0x3FF) / 1024, n->unk_10);
                    func_0895B5A8(h);
                    func_0895B5A0(h);
                    x = n->unk_10; o->unk_2D20 += x;
                }
            }
        }
        func_0895B5A8(h);
        break;
    case 1:
        break;
    }
    return 1;
}
