#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4047B8()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60C270;
  for ( i = 1; i < dword_60C250; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60C360 )
  {
    free(ptr[1]);
    qword_60C260 = 256LL;
    off_60C268 = &unk_60C360;
  }
  if ( ptr != (void **)&qword_60C260 )
  {
    free(ptr);
    off_60C270 = &qword_60C260;
  }
  dword_60C250 = 1;
}
