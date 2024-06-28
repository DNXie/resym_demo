#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403924(char *a1, char *a2, __int64 a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  __int64 result; // rax
  struct stat stat_buf; // [rsp+20h] [rbp-A0h] BYREF

  if ( *(_BYTE *)(a3 + 30) && (unsigned int)sub_419BC0(a1, &stat_buf) )
  {
    v3 = sub_40E392(a1);
    v4 = gettext("cannot stat %s");
    v5 = __errno_location();
    error(0, *v5, v4, v3);
    result = 0LL;
  }
  else if ( (unsigned __int8)sub_40328C(a1, a2, a3) != 1 )
  {
    result = 0LL;
  }
  else
  {
    if ( byte_6204A5 )
      sub_40349B((__int64)a2);
    if ( *(_BYTE *)(a3 + 30)
      && (byte_6204A5 || (stat_buf.st_mode & 0xF000) != 0x8000)
      && (unsigned __int8)sub_4033FA((__int64)&stat_buf, (__int64)a2) != 1 )
    {
      result = 0LL;
    }
    else
    {
      result = sub_4032FB(a2);
    }
  }
  return result;
}
