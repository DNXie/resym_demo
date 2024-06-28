#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401A68(char **a1, struct re_pattern_buffer *a2, char *a3)
{
  int v3; // eax
  char *v4; // rax
  size_t v5; // rax
  unsigned __int8 v7; // [rsp+27h] [rbp-9h]
  const char *v8; // [rsp+28h] [rbp-8h]

  v7 = 1;
  v3 = *optarg;
  if ( v3 == 110 )
  {
LABEL_7:
    *a1 = optarg;
    return v7;
  }
  if ( v3 <= 110 )
  {
    if ( v3 != 97 )
      return 0;
    goto LABEL_7;
  }
  if ( v3 != 112 )
  {
    if ( v3 != 116 )
      return 0;
    goto LABEL_7;
  }
  v4 = optarg++;
  *a1 = v4;
  a2->buffer = 0LL;
  a2->allocated = 0LL;
  a2->fastmap = a3;
  a2->translate = 0LL;
  re_syntax_options = 710LL;
  v5 = strlen(optarg);
  v8 = re_compile_pattern(optarg, v5, a2);
  if ( v8 )
    error(1, 0, "%s", v8);
  return v7;
}
