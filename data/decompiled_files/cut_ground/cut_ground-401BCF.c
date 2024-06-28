#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_401BCF(unsigned __int64 a1, bool *a2)
{
  bool v2; // al
  bool v4; // [rsp+1Fh] [rbp-1h]

  v2 = qword_60B2B8 && qword_60B2B8 <= a1 || a1 <= qword_60B2B0 && sub_401B27(a1);
  v4 = v2 != byte_60B2CD;
  if ( a2 && v2 != byte_60B2CD )
    *a2 = sub_401BA5(a1);
  return v4;
}
