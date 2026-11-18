#include "common.h"

typedef struct { void *unk_00; } It_08878520;
typedef struct { u8 pad_00[4]; s32 unk_04; } Pair_08878520;
typedef struct {
    u8 pad_00[0x544];
    u8 unk_544[0x2E8];
    u8 unk_82C;
} T;
typedef struct { s32 unk_00, unk_04; } U;
typedef struct { u8 pad_00[4]; u8 unk_04[4]; } W;
typedef struct {
    u8 pad_00[0xBB8];
    W unk_BB8;
} V;

extern s32 D_089F96D4[];
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
Pair_08878520 *func_0886E1B8(It_08878520 *);
s32 func_0886E1C4(It_08878520 *, It_08878520 *);
void func_0886E1DC(It_08878520 *, void *);
void func_0886E1E8(It_08878520 *, void *, s32 *);
char *func_088D6EBC(void *);
extern void func_0889B620(char *, s32);
void func_0889B6E8(char *, s32);
void func_0889BF08(void *, f32);
void func_0889C0A4(void *, f32, f32);
void func_0889C514(char *, s32);

void func_08879984(T *arg0, U *arg1, s32 arg2) {
    s32 key;
    It_08878520 it, end;
    W *p;
    s32 i;
    char *q;
    s32 temp;

    if (arg1->unk_00 > 0 && arg0->unk_82C == 0) {
        q = func_088D6EBC(arg0->unk_544);
        if (arg1->unk_04 > 0) {
            i = arg1->unk_04 == 4 ? 2 : 1;
        } else {
            i = 0;
        }
        p = &((V *)func_089B53D8(func_088586E8()))->unk_BB8;
        key = D_089F96D4[i];
        func_0886E1E8(&it, p->unk_04, &key);
        func_0886E1DC(&end, p->unk_04);
        if (func_0886E1C4(&end, &it) != 0) {
            temp = func_0886E1B8(&it)->unk_04;
        } else {
            temp = 0;
        }
        func_0889BF08(q, 0.0f);
        func_0889B620(q, temp);
        func_0889B6E8(q, arg2);
        func_0889C514(q, 5);
        func_0889C0A4(q, (f32)arg1->unk_00, 1.0f);
    }
}
