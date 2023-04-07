class Solution{   
public:

    bool ispalindrome(string s){
        int i=0;
        int j=s.size()-1;
        bool key=1;
        while(i<=j){
            if(s[i]!=s[j]){
                key=0;
                break;
            }
            i++;
            j--;
        }
        return key;
    }
    int addMinChar(string str){    
      if(ispalindrome(str)==1){
          return 0;
      }    
      string pq=str;
      int count=str.size();
      while(pq.size()>1){
          if(ispalindrome(pq)==1){
              break;
          }
          else{
              count--;
              pq.pop_back();
          }
      }
      
      return str.size()-count;
    }
};