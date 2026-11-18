#include "common.h"

typedef struct {
    s32 unk_00;
    u16 unk_04[0x26];
} E_088AD2BC;

typedef struct {
    E_088AD2BC *unk_00;
} V_088AD2BC;

typedef struct {
    u8 unk_00;
    u8 unk_01;
} A_088AD2BC;

s32 func_0881F08C(void *, s32, u32);
extern E_088AD2BC *D_08AD4788[];
extern s32 D_08AD478C[];

s32 func_088AD2BC(A_088AD2BC *arg0, s32 arg1) {
    s32 ret;
    E_088AD2BC *p;
    u32 i;
    u16 *s;
    V_088AD2BC *vp;
    s32 *sz;

    ret = 0;
    if (arg0->unk_01 != 0) {
        arg0->unk_01--;
        if (arg0->unk_01 != 0) {
            return 1;
        }
        ret = 1;
    }
    p = D_08AD4788[0];
    vp = (V_088AD2BC *)D_08AD4788;
    if (p != vp->unk_00 + D_08AD478C[0]) {
        sz = D_08AD478C;
        do {
            s = p->unk_04;
            i = 0;
            while (*s != 0) {
                if (i >= 0x180) {
                    i = 0;
                    break;
                }
                s++;
                i++;
            }
            if (i != 0 && func_0881F08C(p->unk_04, arg1, i * 2) == 0) {
                arg0->unk_00 = p->unk_00;
                arg0->unk_01 = i;
                return 1;
            }
            p++;
        } while (p != vp->unk_00 + *sz);
    }
    return ret;
}
