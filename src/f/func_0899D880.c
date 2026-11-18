#include "common.h"

typedef struct {
    u8 pad_00[0x1F0];
    s32 unk_1F0;
    s32 unk_1F4;
    void *unk_1F8;
    char unk_1FC[0x20];
    void *unk_21C;
} E_0899D880;

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    u8 pad_24[0xC];
} F_0899D880;

typedef struct {
    u8 pad_00[0x74];
    F_0899D880 unk_74[1];
} G_0899D880;

typedef struct {
    E_0899D880 unk_000[3];
    u8 pad_660[0x10];
    G_0899D880 *unk_670;
} S_0899D880;

extern char *D_08A06DA8[];
extern char D_08A06E10[];
extern char D_08A06E14[];
void func_08822B3C(char *, char *);
void func_08822918(char *, char *);
s32 func_0888AFAC(char *);
s32 func_0893D94C(void *, char *);
s32 func_0899DF2C(S_0899D880 *, char *);
void func_08993614(void *);
void func_089936B8(void *, char *);

void func_0899D880(S_0899D880 *arg0, s32 arg1, char *arg2) {
    char buf[0x100];
    F_0899D880 *f;

    if (arg0->unk_000[arg1].unk_1F4 != 0) {
        return;
    }
    if (arg0->unk_000[arg1].unk_1F8 != NULL && func_0893D94C(arg0->unk_000[arg1].unk_1F8, arg2) == 0) {
        return;
    }
    if ((u8)func_0899DF2C(arg0, arg2) == 0) {
        func_08993614(arg0->unk_000[arg1].unk_21C);
        f = &arg0->unk_670->unk_74[arg1];
        f->unk_20 = func_0888AFAC(D_08A06E10);
        func_08822B3C(f->unk_00, D_08A06E10);
    } else {
        func_08822B3C(buf, D_08A06DA8[0]);
        func_08822918(buf, arg2);
        func_08822918(buf, D_08A06E14);
        func_089936B8(arg0->unk_000[arg1].unk_21C, buf);
        func_08822B3C(arg0->unk_000[arg1].unk_1FC, arg2);
        arg0->unk_000[arg1].unk_1F0 = 0;
        arg0->unk_000[arg1].unk_1F4 = 1;
    }
}
