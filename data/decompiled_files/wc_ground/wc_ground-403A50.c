#include "/share/binary_recovery/clang-parser/defs.hh"
double sub_403A50()
{
  double v0; // rax
  double v2; // [rsp+10h] [rbp-10h]
  double v3; // [rsp+18h] [rbp-8h]

  v2 = (double)(int)sysconf(85);
  v3 = (double)(int)sysconf(30);
  if ( v2 < 0.0 || v3 < 0.0 )
    v0 = 67108864.0;
  else
    v0 = v2 * v3;
  return v0;
}
