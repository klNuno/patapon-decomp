#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
} T;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x2020];
    u8 unk_2024[0x10];
    s8 unk_2034;
} S;

typedef struct {
    u32 unk_00;
    s8 unk_04[0x24];
} Str_089C57B8;

void func_08937690(Str_089C57B8 *, s32);
void func_0893B098(s32 *arg0, char *arg1);
void func_0893AEB4(s32 *, void *);
char *func_0893B088(char *arg0, s32 arg1, s8 arg2);
void func_0893AFEC(T **, s32, s32, char *);

s32 func_0893AF70(S *arg0, s32 arg1) {
    T *temp;
    Str_089C57B8 temp1;
    s32 temp2;
    s32 temp3;
    u8 temp4[8];
    char *temp5;

    temp1.unk_00 = 0;
    func_08937690(&temp1, arg1);
    func_0893B098(&temp2, (char *)arg0->unk_04);
    func_0893AEB4(&temp3, arg0->unk_04);
    temp5 = func_0893B088((char *)(u32)&temp4, (s32)&temp1, arg0->unk_2034);
    func_0893AFEC(&temp, temp2, temp3, temp5);
    return temp == (T *)arg0->unk_2024 ? 0 : temp->unk_30;
}
