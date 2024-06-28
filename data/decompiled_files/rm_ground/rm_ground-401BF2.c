#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401BF2(int a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  int result; // eax
  int i; // [rsp+14h] [rbp-BCh]
  char *filename; // [rsp+18h] [rbp-B8h]
  struct stat stat_buf; // [rsp+20h] [rbp-B0h] BYREF

  for ( i = 1; ; ++i )
  {
    result = i;
    if ( i >= a1 )
      break;
    filename = (char *)a2[i];
    if ( *filename == 45 && filename[1] && !(unsigned int)sub_40B2B0(filename, &stat_buf) )
    {
      v2 = sub_403DBD(filename);
      v3 = sub_405248(1LL, 1LL, filename);
      v4 = *a2;
      v5 = gettext("Try `%s ./%s' to remove the file %s.\n");
      return fprintf(stderr, v5, v4, v3, v2);
    }
  }
  return result;
}
