#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4031D8(int a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rbx
  int *v4; // rax
  unsigned __int8 v6; // [rsp+1Bh] [rbp-95h]
  struct statfs buf; // [rsp+20h] [rbp-90h] BYREF

  v6 = 1;
  if ( !fstatfs(a1, &buf) )
  {
    if ( buf.f_type == 1702057283 )
      return v6;
    if ( buf.f_type > 1702057283 )
    {
      if ( buf.f_type == 1852207972 )
        return v6;
      if ( buf.f_type > 1852207972 )
      {
        if ( buf.f_type == 1952539503 || buf.f_type == 4283649346LL || buf.f_type == 1937076805 )
          return v6;
      }
      else if ( buf.f_type == 1702057286 || buf.f_type == 1799439955 )
      {
        return v6;
      }
    }
    else
    {
      if ( buf.f_type == 26985 )
        return v6;
      if ( buf.f_type > 26985 )
      {
        if ( buf.f_type == 198183888 || buf.f_type == 1397113167 || buf.f_type == 18225520 )
          return v6;
      }
      else if ( buf.f_type == 20859 || buf.f_type == 22092 )
      {
        return v6;
      }
    }
    return 0;
  }
  if ( *__errno_location() != 38 )
  {
    v2 = sub_408FA1(a2);
    v3 = gettext("cannot determine location of %s. reverting to polling");
    v4 = __errno_location();
    error(0, *v4, v3, v2);
  }
  return v6;
}
