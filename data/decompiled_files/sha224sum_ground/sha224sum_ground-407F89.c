#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_407F89()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60C220;
  for ( i = 1; i < dword_60C200; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60C300 )
  {
    free(ptr[1]);
    qword_60C210 = 256LL;
    off_60C218 = &unk_60C300;
  }
  if ( ptr != (void **)&qword_60C210 )
  {
    free(ptr);
    off_60C220 = &qword_60C210;
  }
  dword_60C200 = 1;
}
