#include "common.h"

typedef struct {
    s32 unk_00;
    char unk_04[0x80];
    char unk_84[0x80];
    s32 unk_104;
    void *unk_108;
    s32 unk_10C;
} T_088836EC;

typedef struct {
    s32 unk_00;
    u32 unk_04;
} A_088836EC;


extern u8 *D_08AD1E28[];
extern s32 *D_08AD2070[];
extern char D_089DDF18[];
extern char D_089F9BEC[];
extern char D_089F9BF8[];
extern s32 D_089F8EDC[];
void func_088226BC(char *, char *, ...);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
void *func_0896CE18(void *, void *, s32, s32);
typedef T_088836EC T_088849A0;
void func_08884A74(char *, s32, u32, T_088849A0 *);

s32 func_088836EC(A_088836EC *arg0, char *arg1, s32 arg2) {
    T_088836EC t;
    u8 *g;
    void *h;

    if (arg0 == NULL || arg0->unk_00 == 0) {
        return 0;
    }
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    if (arg2 != 0x10) {
        t.unk_00 = 1;
        t.unk_104 = 0;
        t.unk_84[0] = 0;
        t.unk_108 = NULL;
        t.unk_10C = 0;
        func_088226BC(t.unk_04, D_089DDF18);
        t.unk_00 = arg2;
        t.unk_104 = *(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL);
        func_08822BC4(D_089F9BEC);
        func_08822D5C(t.unk_04, D_089F9BEC, 0x7F);
        t.unk_04[0x7F] = 0;
        h = func_0896CE18(g + 0xEA8D0, D_089F9BF8, 0, 1);
        t.unk_108 = func_0896CE18(h, (void *)D_089F8EDC[arg2], 0, 1);
        func_08884A74(arg1, arg0->unk_00, *(volatile u32 *)&arg0->unk_04, &t);
    }
    return 1;
}
