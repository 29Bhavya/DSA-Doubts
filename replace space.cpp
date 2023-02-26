int main(){
   string s;
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if (ch == ' '){
            s=s+"@40";   
        }

        else{
            s=s+ch;
        }
    }
    return s;
    
}
