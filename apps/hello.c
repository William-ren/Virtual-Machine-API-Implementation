
#include "VirtualMachine.h"
#include <fcntl.h>

int StringMatch(const char *left, const char *right){
    while(*left && *right){
        if(*left != *right){
            return 0;    
        }
        left++;
        right++;
    }
    return (*left == *right);
}

int StringMatchN(const char *left, const char *right, int n){
    while(*left && *right && n){
        if(*left != *right){
            return 0;    
        }
        left++;
        right++;
        n--;
    }
    if(0 == n){
        return 1;    
    }
    return (*left == *right);
}
void VMMain(int argc, char *argv[]){
 int Index;
     int DirDescriptor, FileDescriptor, Length;
    char LineBuffer[1024];
    char DirectoryName[VM_FILE_SYSTEM_MAX_PATH];
    SVMDirectoryEntry DirectoryEntry;
    int CharactersIn = 0;
    int Mil, Kil, One;
    VMDirectoryCurrent(DirectoryName);
    VMPrint("hello world!");
    VMPrint("In VMMain:\n");
    for(Index = 0; Index < argc; Index++){
        VMPrint("%d = %s\n", Index, argv[Index]);
    }
    VMPrint("Goodbye\n"); 
   
}

