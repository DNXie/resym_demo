#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40AE80(char *a1)
{
  char v1; // al
  const char *v3; // [rsp+20h] [rbp-10h]
  const char *v4; // [rsp+28h] [rbp-8h]

  v3 = sub_40ADC9(a1);
  if ( !*v3 )
    v3 = a1;
  v4 = &v3[sub_40AE32(v3)];
  v1 = *v4;
  *v4 = 0;
  return v1 != 0;
}
