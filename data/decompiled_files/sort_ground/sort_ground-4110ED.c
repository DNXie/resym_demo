#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4110ED()
{
  double v0; // xmm0_8
  double v2; // [rsp+10h] [rbp-10h]
  double v3; // [rsp+18h] [rbp-8h]

  v2 = (double)(int)sysconf(86);
  v3 = (double)(int)sysconf(30);
  if ( v2 < 0.0 || v3 < 0.0 )
    v0 = sub_411075() / 4.0;
  else
    v0 = v2 * v3;
  return *(_QWORD *)&v0;
}
