int b=1;
bool intero(int a){
    bool ris = true;
    if(a>1){
        if(a>b+1){
            if(a%(a-b)==0){ris=false; return ris;}
            else{b++;ris=intero(a);return ris;}
        }else{return true;}
    }else{return false;}
}
bool intero(int a,int a2){
    bool ris = true;
    if(a>1&&a2>1){
        if(a>b+1&&a2>b+1){
            if(a%(a-b)==0||a2%(a2-b)==0){ris=false; return ris;}
            else{b++;ris=intero(a,a2);return ris;}
        }else{return true;}
    }else{return false;}
}
