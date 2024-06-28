#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4056AC(__int64 a1, __int64 a2)
{
  char *i; // [rsp+10h] [rbp-10h]
  char *dest; // [rsp+18h] [rbp-8h]

  dest = (char *)sub_40530A(0x21uLL, a2);
  strncpy(dest, (const char *)(a1 + 44), 0x20uLL);
  dest[32] = 0;
  for ( i = &dest[strlen(dest)]; dest < i && *(i - 1) == 32; *i = 0 )
    --i;
  return dest;
}
