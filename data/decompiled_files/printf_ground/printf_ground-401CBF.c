#include "/share/binary_recovery/clang-parser/defs.hh"
long double __fastcall sub_401CBF(__int64 a1)
{
  char *v1; // rax
  const char *v3; // [rsp+28h] [rbp-18h] BYREF
  long double v4; // [rsp+30h] [rbp-10h]

  if ( (*(_BYTE *)a1 == 34 || *(_BYTE *)a1 == 39) && *(_BYTE *)(a1 + 1) )
  {
    v4 = (long double)*(unsigned __int8 *)(a1 + 1);
    if ( *(_BYTE *)(a1 + 2) && byte_60F290 != 1 )
    {
      v1 = gettext("warning: %s: character(s) following character constant have been ignored");
      error(0, 0, v1, a1 + 2);
    }
  }
  else
  {
    *__errno_location() = 0;
    v4 = sub_403069(a1, &v3);
    sub_401A57((const char *)a1, v3);
  }
  return v4;
}
