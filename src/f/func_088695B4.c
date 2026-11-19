#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    char unk_18[0x10];
} S;

typedef struct Obj_088697AC Obj_088697AC;
extern u8 D_08A44BB4[];
void *func_08827A50(s32, s32);
void func_088697AC(Obj_088697AC *arg0, void *arg1, s32 arg2);
char *func_0886989C(char *arg0);
void func_088698B4(S *);

S *func_088695B4(void *arg0, s32 arg1) {
    S *temp;

    if ((temp = func_08827A50(0x28, arg1)) != NULL) {
        func_088698B4(temp);
        temp->unk_14 = D_08A44BB4;
        func_0886989C(temp->unk_18);
        func_088697AC((Obj_088697AC *)temp->unk_18, arg0, arg1);
    }
    return temp;
}
