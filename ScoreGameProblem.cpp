#include <iostream>
#include <vector>

//Ana Carolina Laurini Malara.
int main(){
  std::vector<std::string> s = {"20", "4", "D", "C", "+","6"}; //"2" = {'2','\0'}
  std::vector<int> v;
  int num=0;
  int sum = 0;
  
  
  for(int i = 0; i <s.size();i++){
	  	//print the ASCII code
	    //    std::cout<<s[i]<< " "<<int(s[i][0]) <<'\n';
	    
	    if(s[i].compare("D")==0 && v.size() >= 1){
	    	
	    	v.push_back(2*v.back());
		}    
		else if(s[i].compare("C")==0 && v.size() >= 1)
		{
			v.pop_back();
		}
		else if(s[i].compare("+")==0 && v.size() >= 2)
		{
			v.push_back(v.back() + v.at(v.size()-2) );
		}
		else{
			try{ //Randling Exceptions
				if(stoi(s[i])){
					num = stoi(s[i]);
					v.push_back(num);
				}else{
					throw 505;
				}
			}
			catch (...){
	  			std::cout << "There is an invalid character in ops.\n\n";
	  			return -1;
			}	
		}
	
	}
	
    for (int i=0; i<v.size(); ++i){
    	std::cout << v[i] << ' ';
	}
    	  
    std::cout << '\n'; 
  	
  
   for (int i=0; i<v.size(); ++i){
      sum = sum + v[i];
   }

    std::cout << '\n'<<sum;
    
  return 0;
  system("pause");
}
