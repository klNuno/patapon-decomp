#include "common.h"

extern u8 D_08A49624[];
extern void func_0880D858(void);
extern void func_08806D54(void (*)(void), u8 *);
extern s32 func_0880D744(s32);

void func_0880D874(void)
{
    func_08806D54(func_0880D858, D_08A49624);
    func_0880D744(1);
}
