#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_404796(FILE *a1)
{
  int v2; // eax
  int v3; // [rsp+14h] [rbp-Ch]
  int v4; // [rsp+18h] [rbp-8h]

  v3 = 0;
  if ( fileno(a1) < 0 )
    return fclose(a1);
  if ( !__freading(a1) || (v2 = fileno(a1), lseek(v2, 0LL, 1) != -1) )
  {
    if ( (unsigned int)sub_40487E(a1) )
      v3 = *__errno_location();
  }
  v4 = fclose(a1);
  if ( v3 )
  {
    *__errno_location() = v3;
    v4 = -1;
  }
  return v4;
}
