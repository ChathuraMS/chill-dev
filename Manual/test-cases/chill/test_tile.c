#define __rose_lt(x,y) ((x)<(y)?(x):(y))
#define __rose_gt(x,y) ((x)>(y)?(x):(y))

void mm(float **A,float **B,float **C,int ambn,int an,int bm)
{
  int t2;
  int t8;
  int t6;
  int t4;
  int _t3;
  int _t2;
  int _t1;
  int i;
  int j;
  int n;
  if (1 <= an) 
    for (t2 = 0; t2 <= bm - 1; t2 += 4) 
      for (t4 = 0; t4 <= an - 1; t4 += 1) 
        for (t6 = t2; t6 <= __rose_lt(bm - 1,t2 + 3); t6 += 1) {
          if (1 <= ambn) {
            C[t4][t6] = 0.0f;
            C[t4][t6] += (A[t4][0] * B[0][t6]);
          }
          for (t8 = 1; t8 <= ambn - 1; t8 += 1) 
            C[t4][t6] += (A[t4][t8] * B[t8][t6]);
          if (ambn <= 0) 
            C[t4][t6] = 0.0f;
        }
}
