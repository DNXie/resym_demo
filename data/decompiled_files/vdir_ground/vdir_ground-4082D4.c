#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4082D4(__int64 a1, __int64 a2, const char *a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  char *v6; // rax
  char *haystack; // [rsp+18h] [rbp-158h]
  char *v12; // [rsp+30h] [rbp-140h]
  char *v13; // [rsp+38h] [rbp-138h]
  char *dest; // [rsp+40h] [rbp-130h]
  char v15[264]; // [rsp+50h] [rbp-120h] BYREF
  unsigned __int64 v16; // [rsp+158h] [rbp-18h]

  haystack = (char *)a3;
  v16 = __readfsqword(0x28u);
  v12 = (char *)a3;
  if ( qword_61E0B0 )
  {
    v13 = strstr(a3, "%b");
    if ( v13 )
    {
      if ( strlen(haystack) <= 0x65 )
      {
        v12 = v15;
        v6 = (char *)mempcpy(v15, haystack, v13 - haystack);
        dest = stpcpy(v6, &byte_61D920[161 * *(int *)(a4 + 16)]);
        strcpy(dest, v13 + 2);
      }
    }
  }
  return sub_413FA0(a1, a2, v12, a4, a5, a6);
}
