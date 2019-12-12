//
//  main.c
//  Hash
//
//  Created by mac_ck on 2019/11/17.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <memory.h>

#define MAX_KEY 64
#define MAX_DATA 128
#define MAX_TABLE 4096

typedef struct{
    char key[MAX_KEY +1];
    char data[MAX_DATA +1];
    int count;
}
Hash;

Hash tb[MAX_TABLE];

unsigned long hash(const char * str){
    unsigned long hash = 5381;
    int c;
    
    while (c = *str++){
        hash = (((hash << 5) + hash) + c) % MAX_TABLE;
        
    }
    
    return hash % MAX_TABLE;
}

int find(const char *key, char *data){
    unsigned long h = hash(key);
    int cnt = MAX_TABLE;
    
    while (tb[h].key[0] != 0 && cnt--)
    {
        if (strcmp(tb[h].key, key) == 0)
        {
            strcpy(data, tb[h].data);
            return 1;
        }
        h = (h + 1) % MAX_TABLE;
    }
    return 0;
}

int add(const char *key, char *data){
    unsigned long h = hash(key);
    
    while (tb[h].key[0] != 0 ){
        //0- 값이 없다 >
        //1- 값이 있다
        //값이 있으면 비교
        if (strcmp(tb[h].key, key) == 0){
            tb[h].count++;
            return 0;
        }
        h = (h+1) % MAX_TABLE;
    }
    
    strcpy(tb[h].key, key);
    strcpy(tb[h].data, data);
    tb[h].count += 1;
    
    return 1;
    
}

// delete
int delete(const char *key){
    unsigned long h = hash(key);
    
    while (tb[h].key[0] != 0){
    }
    
    return 1;
}

int main()
{
    // T: test case
    // N: number
    // Q: query
   int T, N, Q;
   scanf("%d", &T);
   for (int test_case = 1; test_case <= T; test_case++)
   {
      memset(tb, 0, sizeof(tb));
      scanf("%d", &N);
      char k[MAX_KEY + 1];
      char d[MAX_DATA + 1];

      for (int i = 0; i < N; i++)
      {
         scanf("%s %s", &k, &d);
         add(k, d);
      }
      printf("#%d\n", test_case);

      scanf("%d", &Q);
      for (int i = 0; i < Q; i++)
      {
         char k[MAX_KEY + 1];
         char d[MAX_DATA + 1];

         scanf("%s", &k);

         if (find(k, d))
         {
            printf("%s\n", d);
         }
         else
         {
            printf("not find\n");
         }
      }
   }
}
