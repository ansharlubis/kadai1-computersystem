#include <stdio.h>
#include <string.h>

int mystrlen(char *src){
	int i = 0;

	while(src[i] != '\0'){
		i++;
	}
	return i;
}

void concat(char *target, char *src1, char *src2){
	int i = 0; 
	int s;
	int ln1 = mystrlen(src1);
	int ln2 = mystrlen(src2);

	if (src1[0] == '\0' && src2[0] == '\0'){
	    *target = '\0';
	} else if (src1[0] == '\0'){
		for (s = 0; src2[s] != '\0'; s++){
		    *(target+s) = *(src2+s);
		}
	} else if (src2[0] == '\0'){
		for (s = 0; src1[s] != '\0'; s++){
		    *(target+s) = *(src1+s);
		}
	} else if (ln1 >= ln2){
		while (src2[i] != '\0'){
			target[i] = src1[i];
			target[ln1 + i] = src2[i];
			i++;
		}
		while (src1[i] != '\0'){
			target[i] = src1[i];
			i++;
		}
	} else {
		while (src1[i] != '\0'){
			target[i] = src1[i];
			target[ln1 + i] = src2[i];
			i++;
		}
		while (src2[i] != '\0'){
			target[ln1 + i] = src2[i];
			i++;
		}
	}

}

int main(){
	char s1[100];
	char s2[100];
	char s3[100];
	char s4[100];

	char *emp = "\0";
	char *str1 = "awiefbaow";
	char *str2 = "oaiwenpoarw";

	concat(s1, emp, emp);
	printf("str1: %s, str2: %s, concat: %s\n", emp, emp, s1);

	concat(s2, emp, str1);
	printf("str1: %s, str2: %s, concat: %s\n", emp, str1, s2);

	concat(s3, str2, emp);
	printf("str1: %s, str2: %s, concat: %s\n", str2, emp, s3);

	concat(s4, str1, str2);
	printf("str1: %s, str2: %s, concat: %s\n", str1, str2, s4);
	
	return 0;
}

