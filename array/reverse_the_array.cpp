
string reverseWord(string str){    
  //Your code here
  int n = str.length();
  int k = n;
  for(int i = 0; i < n/2; i++){
      char temp = str[i];
      str[i] = str[--k];
      str[k] = temp;
  }
  return str;
}