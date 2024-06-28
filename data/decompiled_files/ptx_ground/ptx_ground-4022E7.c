#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4022E7(__int64 a1)
{
  char *v1; // rax
  size_t v2; // rax
  __int64 v3; // rbx
  char *v4; // rax
  struct re_pattern_buffer *buffer; // [rsp+18h] [rbp-28h]
  char *s; // [rsp+20h] [rbp-20h]
  const char *v8; // [rsp+28h] [rbp-18h]

  buffer = (struct re_pattern_buffer *)(a1 + 8);
  s = *(char **)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 72;
  if ( byte_610388 )
    v1 = &byte_610680;
  else
    v1 = 0LL;
  *(_QWORD *)(a1 + 48) = v1;
  v2 = strlen(s);
  v8 = re_compile_pattern(s, v2, buffer);
  if ( v8 )
  {
    v3 = sub_406B26(s);
    v4 = gettext("%s (for regexp %s)");
    error(1, 0, v4, v8, v3);
  }
  return re_compile_fastmap(buffer);
}
