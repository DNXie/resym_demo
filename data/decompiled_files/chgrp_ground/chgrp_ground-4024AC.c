#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4024AC(__gid_t a1)
{
  __int64 v1; // rax
  struct group *v3; // [rsp+18h] [rbp-28h]
  char v4[24]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  v3 = getgrgid(a1);
  if ( v3 )
    v1 = (__int64)v3->gr_name;
  else
    v1 = sub_40381F(a1, v4);
  return sub_405C36(v1);
}
