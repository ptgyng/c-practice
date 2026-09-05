1.
int strStr(char* haystack, char* needle) {
    int i,j,hl,nl;
    hl=strlen(haystack);
    nl=strlen(needle);
    for(i=0;i<=hl-nl;i++){
        for(j=0;j<nl;j++){
            if(haystack[i+j]!=needle[j]) break;
        }
        if(j==nl) return i;
    }
    return -1;
}
2.
int strStr(char* haystack, char* needle) {
    if(needle[0]=='\0'){
        return 0;
    }
    int i=0,j=0,c=0;
    while(haystack[c]!='\0'){
        i=c;
        j=0;
        while(haystack[i]!='\0'&&needle[j]!='\0'){
            if(haystack[i]==needle[j]){
            i++;
            j++;
        }
        else{
            break;
            }
        }
        if(needle[j]=='\0'){
            return i-j;
        }
        else{
           c++; 
        }
    }
    return -1;
}
