#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_405CA2()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60B200;
  for ( i = 1; i < dword_60B1E0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60D5E0 )
  {
    free(ptr[1]);
    qword_60B1F0 = 256LL;
    off_60B1F8 = &unk_60D5E0;
  }
  if ( ptr != (void **)&qword_60B1F0 )
  {
    free(ptr);
    off_60B200 = &qword_60B1F0;
  }
  dword_60B1E0 = 1;
}
