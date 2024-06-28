#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40C401(__int64 a1, FILE *a2)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  double v4; // xmm0_8
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]
  __int64 v8; // [rsp+20h] [rbp-10h]
  unsigned __int64 v9; // [rsp+28h] [rbp-8h]

  v6 = sub_40C2D7(a1);
  v7 = sub_40C2B3(a1);
  v8 = sub_40C2C5(a1);
  v9 = sub_40C2E9(a1);
  fprintf(a2, "# entries:         %lu\n", v6);
  fprintf(a2, "# buckets:         %lu\n", v7);
  if ( v8 < 0 )
    v2 = (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1)) + (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1));
  else
    v2 = (double)(int)v8;
  v3 = 100.0 * v2;
  if ( v7 < 0 )
    v4 = (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1)) + (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1));
  else
    v4 = (double)(int)v7;
  fprintf(a2, "# buckets used:    %lu (%.2f%%)\n", v8, v3 / v4);
  return fprintf(a2, "max bucket length: %lu\n", v9);
}
