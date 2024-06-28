#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404C40()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60C2F0;
  for ( i = 1; i < dword_60C2D0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60C6C0 )
  {
    free(ptr[1]);
    qword_60C2E0 = 256LL;
    off_60C2E8 = &unk_60C6C0;
  }
  if ( ptr != (void **)&qword_60C2E0 )
  {
    free(ptr);
    off_60C2F0 = &qword_60C2E0;
  }
  dword_60C2D0 = 1;
}
