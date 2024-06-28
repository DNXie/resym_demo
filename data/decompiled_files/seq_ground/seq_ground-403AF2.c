#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403AF2()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60D200;
  for ( i = 1; i < dword_60D1E0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60D320 )
  {
    free(ptr[1]);
    qword_60D1F0 = 256LL;
    off_60D1F8 = &unk_60D320;
  }
  if ( ptr != (void **)&qword_60D1F0 )
  {
    free(ptr);
    off_60D200 = &qword_60D1F0;
  }
  dword_60D1E0 = 1;
}
