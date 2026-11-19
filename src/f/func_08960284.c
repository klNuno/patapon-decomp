#include "common.h"

typedef struct S_08960438 S_08960438;
typedef struct T_0896077C T_0896077C;

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
} T;

void func_08960438(S_08960438 *, s32);
void func_089602BC(T_0896077C *);

void func_08960284(T *arg0)
{
    func_08960438((S_08960438 *)arg0, 0);
    func_089602BC((T_0896077C *)arg0);
    arg0->unk_04 = 1;
}
