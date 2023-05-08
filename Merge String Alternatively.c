char * mergeAlternately(char * word1, char * word2){
    char *merge=(char *)malloc(sizeof(char)*(strlen(word1)+ strlen(word2)+1));
    //merge=NULL;
    int len1=strlen(word1),len2=strlen(word2),i=0,j=0,ind=0;
    //char merge[len1+len2];
    /*
    while(i<len1 && j<len2){
        merge[ind++]=word1[i];
        merge[ind++]=word2[j];
        i++; j++;
    }
    if(i==len1){
        while(j<len2)
        merge[ind++]=word2[j++];
    }
    else{
        while(i<len1)
        merge[ind++]=word1[i++];
    }*/
/*
    if(len1>=len2){
        while(i<len1){
            merge[ind++]=word1[i++];
            if(j<len2)
            merge[ind++]=word2[j++];
        }
    }
    else{
        while(j<len2){
            if(i<len1)
            merge[ind++]=word1[i++];
            merge[ind++]=word2[j++];
        }
    }
*/
    while(ind<(len1+len2)){
        if(i<len1)
        merge[ind++]=word1[i++];
        if(j<len2)
        merge[ind++]=word2[j++];
    }




    merge[ind]='\0';
    printf("%s",merge);
    return merge;
}
