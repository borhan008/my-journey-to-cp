#include<bits/stdc++.h>
using namespace std;

#define ll long long
string& assign ( const string& str );
string& assign ( const string& str, size_t pos, size_t n );
string& assign ( const char* s, size_t n );
string& assign ( const char* s );
string& assign ( size_t n, char c );
template <class InputIterator> 
     string& assign ( InputIterator first, InputIterator last );


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
   ll m,n; cin >> m >> n;
   ll xx = log10(n)+1;
   if(m==1 && n==0)	cout <<0 << " " << 0;
   else if(n<0 &&  m<0) cout <<"-1 -1";
   else if(m<=0 || n <= 0 || xx > m) cout << "-1 -1";
  else{
      string max="";
      ll xx=n;
      ll i=9;
      while(xx && i){
      	if(xx-i < 0){
      		i--;
            continue;
         }
        max += i+'0';
         xx-=i; 
      }
   
      
      while(max.length() < m){
         max += '0';
      }
      
    	string min="";
       
      if(max[m-1] == '0'){
         ll i=m-1;
        
         while(max[i] == '0'){
            i--;
         }
         //i--;
         min=max[i];
         while(min.length() < m-i) min +='0';
         i--;
         while(i >= 0) {
            min+=max[i];
            i--;
         }
        
      }else{
         min=max;
         reverse(min.begin(), min.end());
      }
      
      cout << min << " " << max;
   }

	return 0;
}