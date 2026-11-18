#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0xC];
    s32 unk_24;
} B_08861AEC;

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    s32 unk_7C;
    B_08861AEC *unk_80;
} E_08861AEC;

typedef struct {
    u8 pad_00[4];
    void *(*unk_04)(s32);
    u8 pad_08[4];
    void (*unk_0C)(void *);
    u8 pad_10[0x38];
    u8 unk_48[0x700];
    E_08861AEC *unk_748;
} A_08861AEC;

extern char D_089F8B68[];
extern char D_08A88158[];

void func_08861C68(A_08861AEC *, s32);
void func_08822B3C(void *, char *);
s32 func_08822BDC(void *, char *, s32);
s32 func_08862270(A_08861AEC *, s32, E_08861AEC *, void *, u32, s32, char *, s32, s32, E_08861AEC *);
void func_0886207C(A_08861AEC *, s32, s32);

s32 func_08861AEC(A_08861AEC *arg0, s32 arg1, s32 arg2, s32 arg3, char *arg4) {
    E_08861AEC *e;
    s32 f;
    B_08861AEC *buf;
    s32 r;

    func_08861C68(arg0, arg2);
    e = &arg0->unk_748[arg2];
    func_08822B3C(e, arg4);
    if (func_08822BDC(arg0->unk_48, D_089F8B68, 4) == 0) {
        e->unk_7C = arg3;
        f = 1;
    } else {
        f = 0;
        buf = arg0->unk_04(0x38);
        r = func_08862270(arg0, 1, e, buf, 0x38, 0, D_08A88158, 0, 0, e);
        if (r >= 0) {
            func_0886207C(arg0, r, 1);
            e->unk_7C = buf->unk_14;
            if (buf != NULL) {
                arg0->unk_0C(buf);
            }
        } else {
            if (buf != NULL) {
                arg0->unk_0C(buf);
            }
            return -1;
        }
    }
    e->unk_80 = arg0->unk_04(e->unk_7C);
    r = func_08862270(arg0, 1, e, e->unk_80, e->unk_7C, 0, D_08A88158, 0, f, e);
    e->unk_78 = e->unk_80->unk_24;
    return r;
}
