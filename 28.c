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