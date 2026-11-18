void func_0886EA08(char *arg0, char *arg1, char *arg2) {
    char **temp_a3;

    **(char ***)(arg1 + 4) = arg2;
    temp_a3 = *(char ***)(arg2 + 4);
    *(char ***)(arg2 + 4) = (char **) *(char ***)(arg1 + 4);
    *(char ***)(arg1 + 4) = (char **) *(char ***)(arg0 + 4);
    **(char ***)(arg0 + 4) = arg1;
    *(char ***)(arg0 + 4) = temp_a3;
    *temp_a3 = arg0;
}
