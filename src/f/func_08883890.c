#include "common.h"

typedef struct {
    s32 unk_00;
    char unk_04[0x80];
    char unk_84[0x80];
    s32 unk_104;
    void *unk_108;
    s32 unk_10C;
} T;

extern s32 *D_08AD2070[];
extern char D_089DDF18[];
void func_088226BC(char *, char *, ...);

s32 func_08883890(s32 arg0, void *arg1)
{
    T temp;
    s32 n;

    if (arg1 == NULL) {
        return 0;
    }
    temp.unk_00 = 1;
    temp.unk_104 = 0;
    temp.unk_84[0] = 0;
    temp.unk_108 = NULL;
    temp.unk_10C = 0;
    func_088226BC(temp.unk_04, D_089DDF18);
    *(volatile s32 *)&temp.unk_00 = arg0;
    n = *(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL);
    *(volatile s32 *)&temp.unk_104 = n;
    return 1;
}
