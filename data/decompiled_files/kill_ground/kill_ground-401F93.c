#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F93(const char *a1, __int64 a2)
{
  int v2; // eax
  char *v3; // rax
  unsigned int v5; // [rsp+28h] [rbp-28h] BYREF
  int v6; // [rsp+2Ch] [rbp-24h]
  char *endptr; // [rsp+30h] [rbp-20h] BYREF
  _BYTE *i; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  void *ptr; // [rsp+48h] [rbp-8h]

  if ( (unsigned int)(*a1 - 48) > 9 )
  {
    ptr = (void *)sub_404677(a1);
    for ( i = ptr; *i; ++i )
    {
      if ( strchr("abcdefghijklmnopqrstuvwxyz", (char)*i) )
        *i -= 32;
    }
    if ( (unsigned int)sub_40488B(ptr, &v5)
      && (*(_BYTE *)ptr != 83
       || *((_BYTE *)ptr + 1) != 73
       || *((_BYTE *)ptr + 2) != 71
       || (unsigned int)sub_40488B((char *)ptr + 3, &v5)) )
    {
      v5 = -1;
    }
    free(ptr);
  }
  else
  {
    *__errno_location() = 0;
    v9 = strtol(a1, &endptr, 10);
    v6 = v9;
    if ( a1 == endptr || *endptr || *__errno_location() || v6 != v9 )
    {
      v2 = -1;
    }
    else if ( (char)((v6 & 0x7F) + 1) >> 1 <= 0 )
    {
      v2 = v6;
    }
    else
    {
      v2 = v6 & 0x7F;
    }
    v5 = v2;
  }
  if ( (v5 & 0x80000000) == 0 && !(unsigned int)sub_4048C5(v5, a2) )
    return v5;
  v3 = gettext("%s: invalid signal");
  error(0, 0, v3, a1);
  return 0xFFFFFFFFLL;
}
