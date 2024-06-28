#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404468()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60F240;
  for ( i = 1; i < dword_60F220; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60F300 )
  {
    free(ptr[1]);
    qword_60F230 = 256LL;
    off_60F238 = &unk_60F300;
  }
  if ( ptr != (void **)&qword_60F230 )
  {
    free(ptr);
    off_60F240 = &qword_60F230;
  }
  dword_60F220 = 1;
}
