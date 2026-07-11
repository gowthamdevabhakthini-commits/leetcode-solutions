char* addBinary(char* a, char* b) {
    int len_a=strlen(a);
    int len_b=strlen(b);
    int max_len = (len_a>len_b) ? len_a : len_b;
    char* result=(char*)malloc(max_len+2);
    if(result==NULL){
        return NULL;
    }
    int i=len_a-1;
    int j=len_b-1;
    int k=max_len+1;
    int carry =0;
    result[k--]='\0';
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0){
            sum+=a[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=b[j]-'0';
            j--;
        }
        carry=sum>>1;
        result[k]=(sum % 2) + '0';
        k--;
    }
    char* temp=(char*)malloc(sizeof(char));
    for(int o=0;o<(k+1)/2;o++){
        *temp=result[o];
        result[o]=result[k-o];
        result[k-o]=*temp;
    }
    return&result[k+1];
}