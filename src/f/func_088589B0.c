#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} T;

typedef struct {
    void *unk_00;
    s32 unk_04;
} O;

void *func_08804338(s32);
s32 func_0881E558(s32, s32);
void *func_08827E30(void *, s32, s32);
s32 func_08858CC8(void *, s32);
void func_0895B390(T *, void *);
s32 func_0895B5B0(T *);
u8 *sceGeEdramGetAddr(void);
s32 sceGeEdramGetSize(void);
extern u8 D_08A44770[];
extern u8 D_08A44904[];
extern T *D_08A7B970[];
extern T *D_08A7B978[];
extern T *D_08A7B984[];
extern s32 D_08A7B98C[];
extern u8 *D_08A7B9A0[];
extern T D_08A7B9B4[];
extern T D_08A7B9C0[];
extern T D_08A7B9CC[];
extern T D_08A7B9F0[];

void func_088589B0(s32 arg0, s32 arg1) {
    s32 size;
    void *p;
    O *o;
    T *t;

    if (arg1 == 0) {
        D_08A7B970[arg0] = NULL;
        return;
    }
    if (arg0 == 5) {
        size = sceGeEdramGetSize() - 0xCC000;
        D_08A7B9A0[0] = &sceGeEdramGetAddr()[0xCC000];
        D_08A7B984[0] = D_08A7B9F0;
        p = func_08804338(0x20);
        if (p != NULL) {
            p = func_08827E30(p, func_08858CC8(D_08A7B9A0[0], 0x20), size);
        }
        func_0895B390(D_08A7B9F0, p);
    } else {
        D_08A7B98C[arg0] = func_0881E558(0x10, arg1 + 0x20);
        t = &D_08A7B9B4[arg0];
        D_08A7B970[arg0] = t;
        p = func_08804338(0x20);
        if (p != NULL) {
            p = func_08827E30(p, func_08858CC8((void *)D_08A7B98C[arg0], 0x20), arg1);
        }
        func_0895B390(t, p);
        if (arg0 == 1) {
            D_08A7B978[0] = D_08A7B9CC;
            if ((o = func_08804338(8)) != NULL) {
                s32 v = func_0895B5B0(D_08A7B9C0);
                o->unk_00 = D_08A44770;
                o->unk_00 = D_08A44904;
                o->unk_04 = v;
            }
            func_0895B390(D_08A7B9CC, o);
        }
    }
}
