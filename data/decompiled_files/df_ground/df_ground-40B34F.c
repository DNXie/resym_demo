#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40B34F(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  void *v5; // rax
  char *format; // [rsp+28h] [rbp-18h]

  if ( a3 == -1 )
    v3 = gettext("invalid argument %s for %s");
  else
    v3 = gettext("ambiguous argument %s for %s");
  format = v3;
  v4 = sub_407062(1u, a1);
  v5 = sub_408511(0, 6, a2);
  error(0, 0, format, v5, v4);
}
