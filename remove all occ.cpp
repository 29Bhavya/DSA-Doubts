int main(){
  string removeOccurrences(string s, string part) {
        for(int i=0;i<s.size();i++){
            s.find(part);
            s.erase(s.find(part),part.length());
        }
        return s;
    }
}
