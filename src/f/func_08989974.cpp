#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 *unk_0C;
} T;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    T unk_18;
    u8 pad_28[0x2C];
    u8 unk_54;
} U;

extern void *D_08AD1E28[];
void func_0886891C(void *, s32);
T *func_089897AC(T *, s16);
void func_089899E0(char *, char *);
char *func_08989A24(char *arg0);

void func_08989974(U *arg0) {
    T temp;
    func_08989A24((char *)&temp);
    func_089899E0((char *)&temp, (char *)&arg0->unk_18);
    func_089897AC(&temp, -1);
    arg0->unk_14 = -1;
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    arg0->unk_54 = 0;
    func_0886891C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 7);
}
}
