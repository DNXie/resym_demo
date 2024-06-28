#include "/share/binary_recovery/clang-parser/defs.hh"
double __fastcall sub_40244A(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  double v4; // [rsp+10h] [rbp-20h] BYREF
  char *v5; // [rsp+18h] [rbp-18h] BYREF

  if ( (unsigned __int8)sub_406519(a1, &v5, &v4, sub_402C86) != 1
    || v4 < 0.0
    || *v5 && v5[1]
    || (unsigned __int8)sub_4023CF(&v4, *v5) != 1 )
  {
    v1 = sub_403B83(a1);
    v2 = gettext("invalid time interval %s");
    error(0, 0, v2, v1);
    sub_4022A6(125);
  }
  return v4;
}
