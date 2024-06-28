#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_401AA1(char *a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  unsigned __int16 v7; // [rsp+0h] [rbp-B0h]
  struct stat stat_buf; // [rsp+10h] [rbp-A0h] BYREF

  v7 = a3;
  if ( (a3 & 0xE00) == 0 )
    return ((a2 ^ v7) & 0xFFF) != 0;
  if ( !(unsigned int)sub_40AA50(a1, &stat_buf) )
  {
    v7 = stat_buf.st_mode;
    return ((a2 ^ v7) & 0xFFF) != 0;
  }
  if ( byte_60E2ED != 1 )
  {
    v3 = sub_403631(a1);
    v4 = gettext("getting new attributes of %s");
    v5 = __errno_location();
    error(0, *v5, v4, v3);
  }
  return 0;
}
