#include "common.h"

typedef struct {
    u8 pad_00[0x24A2];
    u8 unk_24A2;
} S;

typedef struct {
    u8 pad_00[0x42820];
    S *unk_42820;
} G;

typedef struct S_089CE450 S_089CE450;

typedef struct {
    u8 pad_00[0x10A58];
    u8 unk_10A58[1];
} T;

extern void *D_08AD1E28[];
void func_089D6CE0(void *, s32);
s32 func_089CE450(S_089CE450 *arg0, s32 arg1);

void func_089D67A4(T *arg0) {
    G *temp = D_08AD1E28[0];

    if (temp != NULL) {
        temp = (G *)temp;
    } else {
        temp = NULL;
    }
    if (temp->unk_42820->unk_24A2 == 0) {
        func_089D6CE0(arg0, 3);
        func_089CE450((S_089CE450 *)arg0->unk_10A58, 2);
    } else {
        func_089D6CE0(arg0, 2);
    }
}
