#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4033FA(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  __int64 v8[6]; // [rsp+10h] [rbp-30h] BYREF

  v8[0] = sub_40289C(a1);
  v8[1] = v2;
  v8[2] = sub_4028B2(a1);
  v8[3] = v3;
  if ( !(unsigned int)sub_411A21(a2, v8) )
    return 1LL;
  v4 = sub_40E392(a2);
  v5 = gettext("cannot set time stamps for %s");
  v6 = __errno_location();
  error(0, *v6, v5, v4);
  return 0LL;
}
