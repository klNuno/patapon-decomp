#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
} E_08928E64;

typedef struct {
    E_08928E64 **unk_00;
    u32 unk_04;
    u8 pad_08[0x204];
} Vec_08928E64;

typedef struct {
    u8 pad_00[0x20C];
    Vec_08928E64 unk_20C;
    Vec_08928E64 unk_418;
    Vec_08928E64 unk_624;
} A_08928E64;

u32 func_08928E5C(void);

inline void push_08928E64(Vec_08928E64 *v, E_08928E64 *x) {
    if (v->unk_04 < func_08928E5C()) {
        E_08928E64 **p = &v->unk_00[*(u32 *)&v->unk_04];
        if (p != NULL) {
            *p = x;
        }
        v->unk_04++;
    }
}

s32 func_08928E64(A_08928E64 *arg0, E_08928E64 *arg1) {
    if (arg1 == NULL) {
        return 0;
    }
    switch (arg1->unk_40) {
    case 0:
        push_08928E64(&arg0->unk_20C, arg1);
        break;
    case 1:
        push_08928E64(&arg0->unk_418, arg1);
        break;
    case 2:
        push_08928E64(&arg0->unk_624, arg1);
        break;
    }
    return 1;
}
