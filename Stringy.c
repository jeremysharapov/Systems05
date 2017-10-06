#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char *str){
  int i = 0;
  while (str[i]){
    i++;
  }
  return i;
}

char *my_strcpy(char *dest, char *source){
  int i = 0;
  while (source[i]){
    dest[i] = source[i];
    i++;
  }
  dest[i] = source[i];
  return dest;
}

char *my_strcat(char *dest, char *source){
  strcpy(dest + strlen(dest), source);
  return dest;
}

int my_strcmp(char *s1, char *s2){
  while (*s1 && *s2 && *s1 == *s2){
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

char *my_strchr(char *s, char c){
  while (*s){
    if (c == *s){
      return s;
    }
    s++;
  }
  if (c == NULL){
    return s;
  }
  return NULL;
}

void main(){
  char s1[30];
  char s2[] = "hello";
  char s3[] = "goodbye";

  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: %s\n", s3);

  printf("\nTesting strlen(s2):\n");
  printf("[standard]: %ld\n", strlen(s2));
  printf("[mine]: %d\n", my_strlen(s2));

  printf("\nTesting strcpy(s1, s2):\n");
  char s4[30];
  strcpy(s4, s1);
  printf("[standard]: %s\n", strcpy(s4, s2));
  printf("[mine]: %s\n", my_strcpy(s1, s2));

  printf("\nTesting strcat(s1, s3):\n");
  printf("[standard]: %s\n", strcat(s4, s3));
  printf("[mine]: %s\n", my_strcat(s1, s3));

  printf("\nTesting strchr(s1, 'l'):\n");
  printf("[standard]: %s\n", strchr(s1, 'l'));
  printf("[mine]: %s\n", my_strchr(s1, 'l'));

  printf("\nTesting strchr(s1, 0):\n");
  printf("[standard]: %s\n", strchr(s1, 0));
  printf("[mine]: %s\n", my_strchr(s1, 0));

  printf("\nTesting strchr(s1, 'z'):\n");
  printf("[standard]: %s\n", strchr(s1, 'z'));
  printf("[mine]: %s\n", my_strchr(s1, 'z'));

  char ab[] = "ab";
  char abc[] = "abc";
  printf("\nTesting strcmp\n");
  
  printf("Comparing %s to %s:\n", ab, abc);
  printf("[standard]: %d\n", strcmp(ab, abc));
  printf("[mine]: %d\n", my_strcmp(ab, abc));

  printf("Comparing %s to %s:\n", abc, ab);
  printf("[standard]: %d\n", strcmp(abc, ab));
  printf("[mine]: %d\n", my_strcmp(abc, ab));

  printf("Comparing %s to %s:\n", abc, abc);
  printf("[standard]: %d\n", strcmp(abc, abc));
  printf("[mine]: %d\n", my_strcmp(abc, abc));
}
