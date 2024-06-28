#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_407FD5(void *ptr)
{
  DIR **v2; // rbx

  while ( 1 )
  {
    v2 = (DIR **)ptr;
    if ( !ptr )
      break;
    ptr = (void *)*((_QWORD *)ptr + 2);
    if ( v2[3] )
      closedir(v2[3]);
    free(v2);
  }
}
