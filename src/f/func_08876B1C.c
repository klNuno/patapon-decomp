#include "common.h"

extern char D_089F9554[];

void func_088226BC(char *, char *, ...);
void *func_0886095C(void);
extern void func_08863F00(void *, char *);
s32 func_089A8B20(void *, s32);

void func_08876B1C(u8 *arg0)
{
    char temp[0x40];
    char *str;
    u8 *obj;
    obj = arg0 + 0x2460;
    str = D_089F9554;
    if (func_089A8B20(obj, 0xE)) {
        str = D_089F9554;
    }
    func_088226BC(temp, str, func_089A8B20(obj, 0xE));
    func_08863F00(func_0886095C(), temp);
}
