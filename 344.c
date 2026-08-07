void reverseString(char* s, int sSize) {
    char *left,*right;
    for(int i=0;i<sSize/2;i++){
        char t;
        left=s+i;
        right=s+sSize-1-i;
        t=*left;
        *left=*right;
        *right=t; 
    }
}