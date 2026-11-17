#include <stdio.h>
#include <string.h>
// Define maximum memory in bytes to use as buffer
#define MAX_PAGE_SIZE 100*1024

int main(int argc, char*argv[]){

	if(argc<=2){
		printf("Insufficient Arguments\n");
		printf("Merges contents of files and outputs it to new file\n");
		printf("Usage: concat [file1] [file2] ..... [outputfile]\n");
		return -1;
	}
	
	FILE *ifptr;
	FILE *ofptr =fopen(argv[argc-1],"w+");
	if(ofptr==NULL){
		printf("Error creating >%s< file\n",argv[argc-1]);
		return -2;
	}
	char sbuff[MAX_PAGE_SIZE+2];
	int cbuff;
	unsigned int page;
	for(int i=1;i<argc-1;i++){
		ifptr = fopen(argv[i],"r");
		if(ifptr==NULL){
			printf("Error opening >%s< file\n",argv[i]);
			return -1;
		}
		page=0;	
		sbuff[0]='\0';
		while((cbuff=fgetc(ifptr))!=EOF){
			sbuff[page]=(char)cbuff;
			page++;
			if(page==MAX_PAGE_SIZE){
				fputs(sbuff,ofptr);
				
				page=0;
				sbuff[0] ='\0';
			}
		}
		if(page!=0){
			sbuff[page] = '\0';
			fputs(sbuff, ofptr);
			page=0;
			sbuff[0]='\0';
		}
		fclose(ifptr);
		printf("%s done!\n",argv[i]);
	}
	fclose(ofptr);
	printf("\nSUCCESS: %s created!\n",argv[argc-1]);
	return 0;
}
