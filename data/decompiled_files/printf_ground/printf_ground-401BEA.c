#include "/share/binary_recovery/clang-parser/defs.hh"
uintmax_t __fastcall sub_401BEA(__int64 a1)
{
  char *v1; // rax
  char *endptr; // [rsp+20h] [rbp-10h] BYREF
  uintmax_t v4; // [rsp+28h] [rbp-8h]

  if ( (*(_BYTE *)a1 == 34 || *(_BYTE *)a1 == 39) && *(_BYTE *)(a1 + 1) )
  {
    v4 = *(unsigned __int8 *)(a1 + 1);
    if ( *(_BYTE *)(a1 + 2) && byte_60F290 != 1 )
    {
      v1 = gettext("warning: %s: character(s) following character constant have been ignored");
      error(0, 0, v1, a1 + 2);
    }
  }
  else
  {
    *__errno_location() = 0;
    v4 = strtoumax((const char *)a1, &endptr, 0);
    sub_401A57((const char *)a1, endptr);
  }
  return v4;
}
