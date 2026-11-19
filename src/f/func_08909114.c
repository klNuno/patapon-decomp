#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u8 *unk_1C;
} P;

typedef struct {
    s32 unk_00;
    char unk_04[0x200];
    char unk_204[0x200];
    P unk_404;
} T;

typedef struct {
    u8 pad_00[0x8488];
    s32 unk_8488;
} T1;

void *func_08807190(s32, void *);
T *func_088DA034(T *arg0, T *arg1);
T *func_088EF608(T *arg0, s32 arg1, s32 arg2, s32 *arg3, P *arg4);
s32 func_089091B4(char *arg0);
s32 func_0890918C(char *arg0, s32 arg1);

void func_08909114(T1 *arg0, s32 arg1, s32 arg2, s32 *arg3, P *arg4)
{
    T temp;
    T *temp1;

    func_088EF608(&temp, arg1, arg2, arg3, arg4);
    temp1 = (T *)func_08807190(0x424, (void *)func_0890918C((char *)arg0, func_089091B4((char *)arg0)));
    if (temp1 != NULL) {
        func_088DA034(temp1, &temp);
    }
    arg0->unk_8488++;
}
