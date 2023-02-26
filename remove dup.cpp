int main(){
  string removeDuplicates(string s) {
        int i=0;
        while(i<s.size()-1){
            int count=0;
            if(s[i]==s[i+1]){
                count++;
                s.erase(i,count+1);
                i--;
                if(i<0) i=0;
            }
            else{
                i++;
            }
        }
        return s;
    }
}

q:https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
