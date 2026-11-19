#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    u16 unk_04[0x26];
} E_088AD2BC;

typedef struct {
    E_088AD2BC *unk_00;
} V_088AD2BC;

extern E_088AD2BC *D_08AD4788[];
extern s32 D_08AD478C[];

void func_088AD254(void) {
    E_088AD2BC *p;
    V_088AD2BC *vp;
    s32 *sz;

    p = *(E_088AD2BC *volatile *)D_08AD4788;
    vp = (V_088AD2BC *)D_08AD4788;
    if (p != (*(E_088AD2BC **&)vp) + D_08AD478C[0]) {
        sz = D_08AD478C;
        do {
            p++;
        } while (p != vp->unk_00 + *sz);
    }
    D_08AD478C[0] = 0;
}
}
