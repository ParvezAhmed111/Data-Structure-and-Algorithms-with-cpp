#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	string s="mgoihnmgiohnjgihjnighjnugihngiuokpooiaaaaaaaaaaaaaaa";
	
	int freq[26];
	for(int i=0; i<26; i++){
		freq[i]=0;
	}
	
	//count of every character stored in frequency array
	for(int i=0; i<s.size(); i++){
		freq[s[i]-'a']++;
	}
	
	
	//for storing high frequency character
	char ans='a';
	int maxfreq=0;
	
	for(int i=0; i<26; i++){
		if(freq[i]>maxfreq){
			maxfreq=freq[i];
			ans=i+'a';
		}
	}
	
	cout<<maxfreq<<" "<<ans<<endl;
	return 0;
	
}



