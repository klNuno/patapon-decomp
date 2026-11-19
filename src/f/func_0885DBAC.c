#include "common.h"

typedef struct S S;
struct S {
    u8 pad_00[0x44];
    S *unk_44;
    S *unk_48;
};

s32 func_0885DBAC(S *arg0) {
    S *temp = arg0->unk_44;
    s32 count = 0;

    if (temp != NULL) {
        do {
            temp = temp->unk_48;
            ++count;
        } while (temp != NULL);
    }
    return count;
}
