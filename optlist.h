#ifndef OPTLIST_H
#define OPTLIST_H
typedef struct option_t
{
    char option;
    char *argument;
    int argIndex;
    struct option_t *next;
} option_t;

option_t *GetOptList(int argc, char *const argv[], char *const options);
void FreeOptList(option_t *list);

#endif  /* ndef OPTLIST_H */
