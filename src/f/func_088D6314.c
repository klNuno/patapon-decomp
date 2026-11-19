#include "common.h"

typedef struct {
    u8 pad_00[8];
    char unk_08[0xFC8];
    s32 unk_FD0;
} T;

typedef struct {
    u8 pad_00[0xA8];
} S;

typedef struct {
    f32 unk_00[12];
} M;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} P;

typedef struct {
    s32 unk_00;
    void *unk_04;
} U;

void *func_08807190(u32, u8 *);
void func_088D637C(void *, void *);
s32 func_088D64B4(char *arg0, s32 arg1);
s32 func_088D64D4(char *arg0);
S *func_088D64DC(S *arg0, const M *arg1, const P *arg2, U *arg3, u8 arg4, f32 arg5);

void func_088D6314(T *arg0, const M *arg1, const P *arg2, U *arg3, u8 arg4, f32 arg5) {
    S temp;
    void *temp2;
    func_088D64DC(&temp, arg1, arg2, arg3, arg4, arg5);
    temp2 = func_08807190(0xA8, (u8 *)func_088D64B4(arg0->unk_08, func_088D64D4(arg0->unk_08)));
    if (temp2 != NULL) {
        func_088D637C(temp2, &temp);
    }
    arg0->unk_FD0++;
}
